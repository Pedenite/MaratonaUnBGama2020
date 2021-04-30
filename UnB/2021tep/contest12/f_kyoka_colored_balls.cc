#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define MAX (int) (1e5+1)
#define mod (int) (1e9+7)
#define forn(j,n) for(int i = j; i < n; i++)
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> ii;

ll binom(int n, int m) {
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));

    for (int i = 0; i <= n; ++i) {
        dp[i][0] = dp[i][i] = 1;

        for (int j = 1; j < i; ++j)
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
    }

    return dp[n][m];
} 

int main() {
    ll k, c[1000], res;

    scanf("%lld", &k);
    for (int i = 0; i < k; i++) {
        scanf("%lld", &c[i]);
        if (i) {
            res = binom(c[i], res);
        } else {
            res = c[i];
        }
    }

    printf("%lld\n", res);

    return 0;
}
