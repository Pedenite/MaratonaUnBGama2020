#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll get_max(ll n) {
    if (n == 0) {
        return 0;
    }

    ll maior;
    for (maior = 1; maior < n; maior++) {
        maior <<= 1;
    }

    return maior;
}

int main() {
    ll l, r, maior;

    cin >> l >> r;
    cout << get_max(l^r) << '\n';

    return 0;
}
