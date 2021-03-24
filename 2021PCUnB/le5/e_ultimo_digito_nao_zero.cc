#include <bits/stdc++.h>
using namespace std;

#define ll long long

int get_digitos(ll n) {
    int i;
    for (i = 0; n > 0; i++) {
        n /= 10;
    }

    return i;
}

int main() {
    ll n, m, arranjo = 1, curr_digs = 10000000000000000L;

    scanf("%lld %lld", &n, &m);
    for (int i = n; i > n-m; i--) {
        arranjo *= i;
        while (!(arranjo%10)) {
            arranjo /= 10;
        }

        if (i < curr_digs/10) {
            curr_digs = 1;
            int lim = get_digitos(i);
            while (lim--) {
                curr_digs *= 10;
            }
        }

        arranjo %= curr_digs;
    }

    printf("%lld\n", arranjo%10);

    return 0;
}
