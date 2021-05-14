#include <bits/stdc++.h>
using namespace std;

#define mod (int) (1e9+7)
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
    ll r;

    scanf("%lld", &r);
    ll res = fast_exp_mod(4, r, mod) - fast_exp_mod(4, r-1, mod);
    if (res < 0)
        res += mod;

    printf("%lld\n", res);

    return 0;
}
