#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define MAX (int) 2e5
typedef vector<int> vi;

vi g[MAX];
int visited[MAX];

void dfs(int u) {
    visited[u]++;
    for (int v : g[u]) {
        if (!visited[v]) {
            dfs(v);
        } else {
            visited[v]++;
        }
    }
}

int main() {
    int n, m, q, a, b, u, v;

    scanf("%d %d %d", &n, &m, &q);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        g[a].pb(b);
    }

    dfs(1);
    for (int i = 0; i < q; i++) {
        scanf("%d %d", &u, &v);
        if (u == v) {
            printf("sim\n");
            continue;
        }


    }

    return 0;
}
