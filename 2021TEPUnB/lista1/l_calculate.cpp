#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

ll f(ll n) {
    if (n%2 == 0) {
        return n/2;
    } else {
        return -n/2 - 1;
    }
}

int main() {
    ll n;

    cin >> n;
    cout << f(n) << '\n';

    return 0;
}
