#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back
#define ll long long

ll f(ll x) {
    ll res = 0;
    while (x > 0) {
        res += x%10;
        x /= 10;
    }

    return res;
}

ll solve(ll n, ll y) {
    ll l = y;
    ll r = n;
    ll ans = 0;
    while (l <= r) {
        ll mid = (l+r)/2;
        if (mid-f(mid) >= y) {
            ans = mid;
            r = mid-1;
        } else {
            l = mid+1;
        }
    }

    return ans;
}

int main() {
    ll n, y, res;

    cin >> n >> y;
    res = solve(n, y);
    if (res) {
        cout << (n-res+1) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
