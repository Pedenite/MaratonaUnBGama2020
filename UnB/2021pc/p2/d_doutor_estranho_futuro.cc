#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod (ll) 1e12

ll fat (ll n) {
    ll ans = 1;
    for (ll i = 1; i <= n ; i ++) {
        ans = ((ans % mod) * (i % mod) % mod);
        while (ans%10 == 0) {
            ans /= 10;
        }
    }

    return ans;
}

int main() {
    ll n;

    scanf("%lld", &n);
    ll res = fat(n);
    while (res%10 == 0) {
        res /= 10;
    }

    printf("%lld\n", res%10);

    return 0;
}
