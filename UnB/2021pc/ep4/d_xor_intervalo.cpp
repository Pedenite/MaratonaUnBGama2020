#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back

int main() {
    int n, q, ai, l, r;
    vi a;

    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> ai;
        if (i > 0) {
            a.pb(ai ^ a[i-1]);
        } else {
            a.pb(ai);
        }
    }

    while (q--) {
        cin >> l >> r;
        if (l <= 1) {
            cout << a[r-1] << endl;
        } else {
            cout << (a[r-1]^a[l-2]) << endl;
        }
    }

    return 0;
}
