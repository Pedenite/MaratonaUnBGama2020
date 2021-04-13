#include<bits/stdc++.h>
using namespace std;

#define ii pair<int,int>
#define MAX (int)(2e3)
typedef vector<vector<int>> vvi;

int visited[MAX];

void bfs(int start, vvi &g, int lim) {
    int qtd;
    queue<ii> q;
    q.push(make_pair(start, 0));
    visited[start] = true;
    while (q.size()) {
        ii pedagio = q.front();
        int u = pedagio.first;
        qtd = pedagio.second;
        q.pop();
        if (qtd >= lim) {
            break;
        }

        for (int v : g[u]) {
            if (!visited[v] && qtd <= lim) {
                q.push(make_pair(v, qtd+1));
                visited[v] = true;
            }
        }
    }
}

int main() {
    int c, e, l, p, x, y;

    scanf("%d %d %d %d", &c, &e, &l, &p);
    vvi paths(c+1);
    for (int i = 0; i < e; i++) {
        scanf("%d %d", &x, &y);
        if (x != y) {
            paths[x].push_back(y);
            paths[y].push_back(x);
        }
    }

    bfs(l, paths, p);
    for (int i = 1; i <= c; i++) {
        if (visited[i] == true && i != l) {
            printf("%d ", i);
        }
    }

    printf("\n");
    
    return 0;
}
