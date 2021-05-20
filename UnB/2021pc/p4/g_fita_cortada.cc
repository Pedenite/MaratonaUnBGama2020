#include <bits/stdc++.h>
using namespace std;

int tab[4001][3];

int n, v;
vector<int> m;

int solve(int i, int c) {
    if (i < 0)
        return 0;

    if (m[i] > c) {
        if (i > 0 && tab[i-1][c] != -1) {
            return tab[i-1][c];
        } else {
            if (i == 0) {
                return 0;
            } else {
                tab[i-1][c] = solve(i-1, c);
                return tab[i-1][c];
            }
        }
    }

    int a, b;
    if (i > 0 && tab[i-1][c] != -1) {
        a = tab[i-1][c];
    } else {
        if (i == 0) {
            a = 0;
        } else {
            tab[i-1][c] = solve(i-1, c);
            a = tab[i-1][c];
        }
    }

    if (i > 0 && tab[i-1][c-m[i]] != -1) {
        b = tab[i-1][c-m[i]];
    } else {
        if (i == 0) {
            b = 0;
        } else {
            tab[i-1][c-m[i]] = solve(i-1, c-m[i]);
            b = tab[i-1][c-m[i]];
        }
    }

    return max(a, b + m[i]);
}

int main() {
    int n, a[3];

    scanf("%d %d %d %d", &n, &a[0], &a[1], &a[2]);

    for (int i = 0; i < 3; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] < n) {
                tab[i][j] = max(tab[i-1][j], tab[i-1][j-a[i]] + a[i]);
            } else {
                tab[i][j] = tab[i-1][j];
            }
        }
    }

    printf("%d\n", tab[2][n]);

    return 0;
}
