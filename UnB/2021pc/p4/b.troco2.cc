#include <bits/stdc++.h>
using namespace std;

int n, v;
vector<vector<int>> dp;
vector<int> m;

int solve(int i, int c) {
    if (i < 0)
        return 0;

    if (m[i] > c) {
        if (i > 0 && dp[i-1][c] != -1) {
            return dp[i-1][c];
        } else {
            if (i == 0) {
                return 0;
            } else {
                dp[i-1][c] = solve(i-1, c);
                return dp[i-1][c];
            }
        }
    }

    int a, b;
    if (i > 0 && dp[i-1][c] != -1) {
        a = dp[i-1][c];
    } else {
        if (i == 0) {
            a = 0;
        } else {
            dp[i-1][c] = solve(i-1, c);
            a = dp[i-1][c];
        }
    }

    if (i > 0 && dp[i-1][c-m[i]] != -1) {
        b = dp[i-1][c-m[i]];
    } else {
        if (i == 0) {
            b = 0;
        } else {
            dp[i-1][c-m[i]] = solve(i-1, c-m[i]);
            b = dp[i-1][c-m[i]];
        }
    }

    return max(a, b + m[i]);
}

int main() {
    int mi;

    scanf("%d %d", &v, &n);
    dp.resize(n+1, vector<int>(v+1, -1));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &mi);
        m.push_back(mi);
    }

    printf("%c\n", solve(n-1, v) == v ? 'S' : 'N');

    return 0;
}
