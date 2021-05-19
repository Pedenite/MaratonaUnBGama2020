#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (1e6+1)
#define mod (int) (1e9+7)

int tab[MAX];

int fullbonacci(int n) {
    if (tab[n] != -1)
        return tab[n];

    tab[n] = (fullbonacci(n-2) + fullbonacci(n-1))%mod;
    return tab[n];
}

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 3; i <= n; i++)
        tab[i] = -1;

    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 0;

    printf("%d\n", fullbonacci(n));

    return 0;
}
