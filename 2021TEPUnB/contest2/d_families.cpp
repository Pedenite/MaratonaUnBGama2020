#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int t, x, y, z;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y >> z;
        int res = 0;
        if (x > (x+y)/3) {
            res = (3*x-(x+y))*z/(x+y);
        }

        cout << res << "\n";
    }    

    return 0;
}
