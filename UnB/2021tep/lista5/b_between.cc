#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll a, b, x, n;

    cin >> a >> b >> x;
    n = b/x - a/x;
    if (!(a%x)) {
        n++;
    }

    cout << n << endl;

    return 0;
}
