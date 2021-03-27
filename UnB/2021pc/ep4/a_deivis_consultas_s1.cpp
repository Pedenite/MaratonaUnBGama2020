#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back

int main() {
    ll n, q, ai, l, r;
    vll a;

    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> ai;
        if (i > 0) {
            a.pb(ai + a[i-1]);
        } else {
            a.pb(ai);
        }
    }

    while (q--) {
        cin >> l >> r;
        if (l <= 1) {
            cout << a[r-1] << endl;
        } else {
            cout << (a[r-1]-a[l-2]) << endl;
        }
    }

    return 0;
}
