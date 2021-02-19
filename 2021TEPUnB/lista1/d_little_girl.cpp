#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    ll l, r, maior;

    cin >> l >> r;
    for (maior = 1; maior < r; maior++) {
        maior <<= 1;
    }

    cout << maior;

    return 0;
}
