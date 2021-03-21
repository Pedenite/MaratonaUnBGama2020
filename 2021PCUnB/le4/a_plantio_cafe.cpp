#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long

int main() {
    ll n, q, t, k = 0;

    scanf("%lld %lld %lld", &n, &q, &t);
    vll delta(n+5,0);

    for (int i = 0; i < q; i++) {
        ll l, r, x;
        scanf("%lld %lld %lld",&l,&r,&x);
        delta[l-1] += x;
        delta[r] -= x;
    }

    ll atual = 0;

    for (int i = 0; i < n; i++) {
        atual += delta[i];
        if (atual >= t) {
            k++;
        }
    }

    printf("%lld\n", k);

    return 0;
}
