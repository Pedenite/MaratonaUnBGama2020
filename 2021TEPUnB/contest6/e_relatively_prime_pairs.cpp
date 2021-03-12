#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll euclides(ll a, ll b) {
    ll r = a%b, q;
    while(r != 0) {
        q = a/b;
        a = b;
        b = r;
        r = a%b;
    }
    
    q = a/b;
    return b;
}

int main() {
    ll l, r;

    cin >> l >> r;
    

    return 0;
}
