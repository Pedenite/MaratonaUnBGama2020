#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, m, q, ai, l, r, x, mi;
    vi a;

    cin >> n >> m >> q;
    for (int i = 0; i < n; i++) {
        cin >> ai;
        a.pb(ai);
    }

    vi delta(n+2, 0);
    while (q--) {
        scanf("%d %d %d %d", &l, &r, &x, &mi);
        if (mi > 5) {
            continue;
        }
        
        delta[l] += x;
        delta[r+1] -= x;
    }

    int atual = 0;
    vi v(n+2, 0);
    for (int i = 1; i <= n; i ++) {
        atual += delta[i];
        v[i] += atual;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", v[i]+a[i-1]);
    }
    printf("\n");

    return 0;
}
