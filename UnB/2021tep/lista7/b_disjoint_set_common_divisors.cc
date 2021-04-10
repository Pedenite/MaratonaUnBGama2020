#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a,ll b) {
    return b == 0 ? a : gcd(b, a%b);
}

ll coprime_divs(ll n) {
    ll divs = 1;   
    for (ll i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            divs++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n > 1) {
        divs++;
    }

    return divs;
}

int main() {
    ll a, b;

    scanf("%lld %lld", &a, &b);
    ll mdc = gcd(a, b);

    printf("%lld\n", mdc > 1 ? coprime_divs(mdc) : 1);

    return 0;
}
