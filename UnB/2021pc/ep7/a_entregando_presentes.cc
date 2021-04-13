#include <bits/stdc++.h>
using namespace std;

#define MAX (int)(1e3+1)
typedef vector<vector<int>> vvi;

int visited[MAX];

void dfs(int u, vvi &g) {
    visited[u] = true;
    for (int v : g[u]) {
        if (!visited[v]) {
            dfs(v, g);
        }
    }
}

int main() {
    int n, a, i, j, t;

    scanf("%d %d", &n, &a);
    vvi paths(n+5);
    visited[1] = true;
    while (a--) {
        scanf("%d %d %d", &i, &j, &t);
        if (t >= 0) {
            paths[i].push_back(j);
            paths[j].push_back(i);
        }
    }

    dfs(1, paths);
    int res = 0;
    for (int k = 1; k <= n; k++) {
        if (!visited[k]) {
            res++;
        }
    }

    printf("%d\n", res);

    return 0;
}
