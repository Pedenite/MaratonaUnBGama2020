#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, m, c, sum = 0;
    vi v;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> c;
        v.pb(c);
        sum += c;
    }

    sort(v.begin(), v.end());

    

    return 0;
}
