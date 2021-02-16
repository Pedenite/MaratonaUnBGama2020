#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    ll l, r, aux;

    cin >> l >> r;
    for (aux = 1; aux < r; aux++) {
        aux <<= 1;
    }

    cout << aux;

    return 0;
}
