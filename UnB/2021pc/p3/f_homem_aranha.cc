#include <bits/stdc++.h>
using namespace std;

#define MAX 5001

vector<pair<int, int>> points;
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
    int n, d, xi, yi;

    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &xi, &yi);
        points.push_back(make_pair(xi, yi));
    }

    pair<int, int> a1, a2;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            a1 = points[i];
            a2 = points[j];
            if (sqrt(pow(a1.first-a2.first, 2) + pow(a1.second-a2.second, 2)) <= d) {
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }

    dfs(0);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            printf("nao\n");
            return 0;
        }
    }

    printf("sim\n");

    return 0;
}
