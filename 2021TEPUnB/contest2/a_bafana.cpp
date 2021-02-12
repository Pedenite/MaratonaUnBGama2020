#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int t, n, k, p;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k >> p;
        int res = (k+p)%n;

        if (res == 0) {
            res = n;
        }

        cout << "Case " << i+1 << ": " << res << "\n";
    }

    return 0;
}
