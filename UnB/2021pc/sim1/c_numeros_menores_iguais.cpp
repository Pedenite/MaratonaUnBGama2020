#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, m, ai, bi;
    vi a;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> ai;
        a.pb(ai);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
        cin >> bi;
        int index = upper_bound(a.begin(), a.end(), bi)-a.begin();
        if (a[index] > bi || index >= a.size()) {
            index--;
        }

        cout << (index+1) << ' ';
    }

    cout << endl;

    return 0;
}
