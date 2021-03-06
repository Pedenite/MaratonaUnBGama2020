#include <bits/stdc++.h>

using namespace std;

#define vll vector<ll>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define M 1000000007

ll euclides(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ll n, q, ai, i, x;
    vll a;

    scanf("%lld %lld", &n, &q);
    while (n--) {
        scanf("%lld", &ai);
        a.pb(ai);
    }

    while (q--) {
        scanf("%lld %lld", &i, &x);
        a[i-1] *= x;
        ll gcd = euclides(a[0], a[1])%M;
        for (int j = 2; j < a.size(); j++) {
            gcd = euclides(gcd, a[j])%M;
        }

        printf("%lld\n", gcd);
    }

    return 0;
}
