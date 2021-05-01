#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mul(ll a, ll b, ll m) {
    auto r = (a * b) % m;
    return r < 0 ? r + m : r;
}

ll fast_exp_mod(ll a, ll n, ll m) {
    ll res = 1, base = a;
    while (n) {
        if (n & 1)
            res = mul(res, base, m);

        base = mul(base, base, m);
        n >>= 1;
    }

    return res;
}

ll msd_exp(ll a, ll b) {
    long double tmp = (double) b * log10(a);
    tmp -= floor(tmp);
    double res = pow(10, tmp);

    return (ll) floor(res)*100;
}

int main() {
    int t, n, k;
    ll l, r;

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        l = msd_exp(n, k);
        r = fast_exp_mod(n, k, 1000);
        printf("%lld...%lld\n", l, r);
    }

    return 0;
}
