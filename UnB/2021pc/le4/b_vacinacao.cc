#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back

int main() {
    int n, m, pi;
    cin >> n >> m;

    vi p;
    vi delta(n+5, 0);
    vi ops(n+5, 0);
    for (int i = 0; i < n; i++) {
        cin >> pi;
        p.pb(pi);
    }

    for (int i = 0; i < m; i++) {
        int l, r, a;
        cin >> l >> r >> a;
        delta[l-1] += a;
        delta[r] -= a;
        ops[l-1] += 1;
        ops[r] -= 1;
    }

    int atual = 0;
    int atual_ops = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        atual += delta[i];
        p[i] -= atual;
        atual_ops += ops[i];
        if (p[i] > 0) {
            res += atual_ops;
        }
    }

    printf("%d\n", res);

    return 0;
}
