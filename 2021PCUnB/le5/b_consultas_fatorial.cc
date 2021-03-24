#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define MAX (int) (1E6+5)

int fatorial[MAX];

void compute_fat() {
    fatorial[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fatorial[i] = ((ll) i * (ll) fatorial[i-1])%mod;
    }
}

int main() {
    int q, x;

    compute_fat();
    cin >> q;
    while (q--) {
        cin >> x;
        cout << fatorial[x] << endl;
    }

    return 0;
}
