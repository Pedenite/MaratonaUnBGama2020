#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX (int) (1e6+1)
#define mod (int) (1e9+7)
#define forn(j,n) for(int i = j; i < n; i++)

ll gcd(ll a,ll b) {
    return b == 0 ? a : gcd(b, a%b);
}

ll qnt_divs(ll n) {
    ll divs = 0;
    ll b;
    
    for (ll i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            b = n/i;
            divs++;
            if (i != b)
                divs++;
        }
    }

    return divs;
}

int main() {
    ll a, b;

    scanf("%lld %lld", &a, &b);
    ll mdc = gcd(a, b);

    printf("%lld\n", qnt_divs(mdc));

    return 0;
}
