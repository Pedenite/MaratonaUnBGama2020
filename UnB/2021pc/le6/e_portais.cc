#include <bits/stdc++.h>
using namespace std;

#define MAX (int) 1e5

vector<int> g[MAX];
int visited[MAX];

void dfs(int u) {
    visited[u] = true;
    for (int v : g[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    int n, t, ai; 

    scanf("%d %d", &n, &t);
    for (int i = 1; i < n; i++) {
        scanf("%d", &ai);
        int j = i+ai;
        g[i].push_back(j);
    }

    dfs(1);
    printf("%s\n", visited[t] ? "sim" : "nao");

    return 0;
}
