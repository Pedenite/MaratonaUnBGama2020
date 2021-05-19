#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (1e6+1)
#define mod (int) (1e9+7)
typedef long long ll;

int tab[MAX];

int solve(int n) {
    if (tab[n] != -1)
        return tab[n];

    tab[n] = ((ll)(solve(n-2) + solve(n-1)) * (ll)(n-1))%mod;
    return tab[n];
}

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        tab[i] = -1;

    tab[0] = 1;
    tab[1] = 0;

    printf("%d\n", solve(n));

    return 0;
}
