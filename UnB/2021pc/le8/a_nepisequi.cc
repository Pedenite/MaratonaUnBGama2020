#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> p, v;

int tab[1000][1000];

int solve(int i, int c) {
    int pos, neg;
    if (i <= 0 || c <= 0)
        return 0;
    
    if (tab[i][c] > -1)
        return tab[i][c];
    
    pos = 0x80000000;
    if (p[i] <= c) {
        pos = solve(i-1, c-p[i]) + v[i];
    }

    neg = solve(i-1, c);
    tab[i][c] = max(pos, neg);
    
    return tab[i][c];
}

int main() {
    int w, n, aux;
    
    p.push_back(0);
    v.push_back(0);

    scanf("%d %d", &w, &n);
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= w; j++)
            tab[i][j] = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &aux);
        p.push_back(aux);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &aux);
        v.push_back(aux);
    }

    printf("%d\n", solve(n, w));

    return 0;
}
