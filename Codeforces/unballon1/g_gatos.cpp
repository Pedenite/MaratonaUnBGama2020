#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    vector<ll> g;
    ll x, a, b, c, d;
    ll qntCat = 0;
    ll n;

    scanf("%lld %lld %lld %lld %lld", &x, &a, &b, &c, &d);

    g.pb(c);
    g.pb(d);
    for(n = 2; n <= x; n++){
        g.pb((a*g[n-1])+(b*g[n-2]));
    }

    printf("%lld\n", g[x]);

    return 0;
}