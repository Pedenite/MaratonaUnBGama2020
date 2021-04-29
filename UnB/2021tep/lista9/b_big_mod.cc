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

int main() {
    ll b, p, m;

    while (scanf("%lld %lld %lld", &b, &p, &m) != EOF) {
        printf("%lld\n", fast_exp_mod(b, p, m));
    }

    return 0;
}
