#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (1e6+1)
#define mod (int) (1e9+7)

int tab[MAX];

int t(int n) {
    if (tab[n] == -1)
        tab[n] = ((t(n-1) + t(n-2))%mod + t(n-3))%mod;

    return tab[n];
}

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 3; i <= n; i++) {
        tab[i] = -1;
    }

    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 1;

    printf("%d\n", t(n));

    return 0;
}
