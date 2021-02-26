#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vl vector<ll>

ll get_max(vl a, ll maior) {
    ll ans = 0;
    for (int i = 1; i < maior; i <<= 1) {
        int count = 0;
        for (auto elem : a) {
            if (elem & i) {
                count++;
            }

            if (count > a.size()/2) {
                break;
            }
        }

        cout << count << " " << i << '\n';
        if (count <= a.size()/2) {
            ans |= i;
        }
    }

    return ans;
}

int main() {
    ll n, k, aux, res = 0;
    vl a;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> aux;

        a.push_back(aux);
    }

    ll x = get_max(a, k);
    for (auto e : a) {
        res += x ^ e;
    }

    cout << x << '\n';
    cout << res << '\n';

    return 0;
}
