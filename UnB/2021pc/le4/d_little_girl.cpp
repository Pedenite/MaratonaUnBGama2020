#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define pb push_back

int main() {
    ll n, q, ai, l, r, sum = 0;
    vll a;

    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> ai;
        a.pb(ai);
    }

    vll delta_qtd(n, 0);

    while (q--) {
        cin >> l >> r;
        delta_qtd[l-1] += 1;
        if (r < n) {
            delta_qtd[r] -= 1;
        }
    }

    for (int i = 1; i < n; i++) {
        delta_qtd[i] += delta_qtd[i-1];
    }

    sort(delta_qtd.begin(), delta_qtd.end());
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        sum += a[i] * delta_qtd[i];
    }

    cout << sum << endl;

    return 0;
}
