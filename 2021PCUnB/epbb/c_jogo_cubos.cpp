#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, m, ai, qi;
    vi a;

    cin >> n >> m;
    while (n--) {
        cin >> ai;
        a.pb(ai);
    }

    sort(a.begin(), a.end());
    while (m--) {
        cin >> qi;
        ai = lower_bound(a.begin(), a.end(), qi)-a.begin();
        if (ai >= a.size() || a[ai] != qi) {
            ai = -2;
        }

        cout << (ai+1) << ' ';
    }

    return 0;
}
