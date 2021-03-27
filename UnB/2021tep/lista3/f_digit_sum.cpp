#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

ll f(ll b, ll n) {
    if (n < b) {
        return n;
    }

    return f(b, n/b) + (n%b);
}

int main() {
    ll n, s;

    scanf("%lld %lld", &n, &s);
    printf("%lld\n", f(n, s));

    return 0;
}
