#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (4e4+1)
#define oo 0x7fffffff
typedef vector<vector<pair<int, int>>> grafo;

int d[MAX];
grafo g(MAX);

int main() {
    int n, m, c, k, u, v, p;

    scanf("%d %d %d %d", &n, &m, &c, &k);
    while (m--) {
        scanf("%d %d %d", &u, &v, &p);
        g[u].push_back(make_pair(v, p));
        g[v].push_back(make_pair(u, p));
    }

    

    return 0;
}
