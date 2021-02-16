#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, t, temp, res;
    vi f;
    
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        f.pb(temp);
    }

    sort(f.begin(), f.end());

    for (res = 0; res < n; res++) {
        if (f[res] <= t) {
            t -= f[res];
        } else {
            // res--;
            break;
        }
    }

    printf("%d\n", res);

    return 0;
}