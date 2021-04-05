#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod (int) (1e9+1)

ll pow_do_paraguai(ll n, ll exp) {
    ll res = 1;
    while (exp--) {
        res *= n;
        res %= mod;
    }

    return res;
}

int main() {
    string s;
    ll res = 0;

    cin >> s;
    int count = 0;
    for (int i = s.size()-1; i >= 0; i--) {
        if (s[i] > 0x60 && s[i] < 0x67)
            s[i] -= 0x20;

        if (s[i] > 0x40 && s[i] < 0x47)
            s[i] -= 0x37;

        if (s[i] >= 0x30)
            s[i] -= '0';

        res += (s[i] * ((ll) pow_do_paraguai(16, count)%mod))%mod;
        res %= mod;
        count++;
    }

    printf("%lld\n", res);

    return 0;
}
