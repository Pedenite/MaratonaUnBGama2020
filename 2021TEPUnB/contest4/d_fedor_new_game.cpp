#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int parity(int a) {
    int p = 0;
    while (a > 0) {
        if (a&1 == 1) {
            p++;
        }
        a >>= 1;
    }

    return p;
}

int main() {
    int n, m, k, xi, friends = 0;
    vi x;

    cin >> n >> m >> k;
    int i = m+1;
    while (i--) {
        cin >> xi;
        x.pb(xi);
    }

    int fedor = x[x.size()-1];
    x.pop_back();
    while (!x.empty()) {
        xi = x[x.size()-1];
        x.pop_back();
        if (parity(xi ^ fedor) <= k) {
            friends++;
        }
    }

    printf("%d\n", friends);

    return 0;
}
