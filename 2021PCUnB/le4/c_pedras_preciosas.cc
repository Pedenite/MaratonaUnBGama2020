#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define pb push_back

int main() {
    ll n, m, ui;
    vll u;
    vll acc;
    vll acc_sorted;
    cin >> n >> m;

    acc.pb(0);
    acc_sorted.pb(0);

    for (int i = 0; i < n; i++) {
        cin >> ui;
        u.pb(ui);
        acc.pb(ui + acc[i]);
    }

    sort(u.begin(), u.end());
    for (int i = 0; i < n; i++) {
        acc_sorted.pb(u[i] + acc_sorted[i]);
    }

    while (m--) {
        ll t, l, r, res;
        cin >> t >> l >> r;
        if (t == 1) {
            res = acc[r] - acc[l-1];
        } else {
            res = acc_sorted[r] - acc_sorted[l-1];
        }

        cout << res << endl;
    }

    return 0;
}
