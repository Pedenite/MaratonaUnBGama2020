#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, k, res;

    cin >> n >> k;
    if (n%2 == 0 && k <= n/2 || n%2 == 1 && k <= (n+1)/2) {
        res = (k*2-1);
    } else {
        res = (k-(n/2)) * 2;
        if (n%2 == 1) {
            res -= 2;
        }
    }
    
    cout << res << endl;

    return 0;
}
