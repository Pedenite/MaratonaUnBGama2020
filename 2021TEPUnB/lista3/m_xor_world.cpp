#include <bits/stdc++.h>
using namespace std;

#define ll long long

int get_parity(ll n, ll i) {
    int parity = 0;
    if (i == 1 && min((n&2), 1ll) != (n&1)) {
        parity = 1;
    } else if ((n&i) != 0 && (n&1) == 0) {
        parity = 1;
    }
    // cout << "par " << n << " on " << i << " is " << parity << endl;
    return parity;
}

ll f(ll a, ll b) {
    if (a == b) {
        return a;
    }

    ll res = 0;

    for (ll i = 1; i <= b; i<<=1) {
        if (get_parity(b, i) != get_parity(max(a-1, 0LL), i)) {
            res |= i;
        }
    }

    return res;
}

int main() {
    ll a, b;

    cin >> a >> b;
    cout << f(a, b) << endl;

    return 0;
}
