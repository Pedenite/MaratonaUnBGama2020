#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    ll n, res;

    while (cin >> n) {
        res = log2(n);
        cout << res << '\n';
    }

    return 0;
}
