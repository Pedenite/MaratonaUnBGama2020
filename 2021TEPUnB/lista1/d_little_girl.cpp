#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

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

ll get_lower_max(ll n) {
    if (n == 1) {
        return 0;
    }

    ll maior;
    for (maior = 1; maior < n>>1; maior++) {
        maior <<= 1;
    }

    return maior;
}

int main() {
    ll l, r, maior;

    cin >> l >> r;
    cout << get_max(l^r) << '\n';

    return 0;
    
    if (l == r){
        maior = 0;
    } else if (get_max(l) < r) {
        maior = get_max(r);
    } else {
        ll mask = get_lower_max(l);
        maior = get_lower_max(l^r);
        // cout << hex << mask << '\n';
        // maior = ~mask&r;
        // cout << hex << maior << '\n';
        // maior ^= mask;
    }

    cout << maior << '\n';

    return 0;
}
