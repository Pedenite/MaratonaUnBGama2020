#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, q, a, b, t, x, res;

    scanf("%d %d %d", &n, &m, &q);
    vector<pair<int, int>> g(n+1);

    while (m--) {
        scanf("%d %d", &a, &b);
        g[a].first++;
        g[b].second++;
    }

    while (q--) {
        scanf("%d %d", &t, &x);
        if (t == 1) {
            res = g[x].first;
        } else {
            res = g[x].second;
        }

        printf("%d\n", res);
    }

    return 0;
}
