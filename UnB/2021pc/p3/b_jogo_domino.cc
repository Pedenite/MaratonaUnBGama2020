#include <bits/stdc++.h>
using namespace std;
 
int g[7][7];
 
void dfs(bool first, int u1, int u2) {
    g[u1][u2]--;
    g[u2][u1]--;
    g[u1][u1] = 0;
    g[u2][u2] = 0;
    for (int i = 0; i < 7; i++) {
        if (g[u2][i]) {
            dfs(false, u2, i);
            break;
        }
 
        if (g[u1][i]) {
            dfs(false, u1, i);
            break;
        }
    }
}
 
int main() {
    int n, x, y;
    bool res = true;
 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        g[x][y]++;
        g[y][x]++;
    }
 
    dfs(true, x, y);
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (g[i][j]) {
                res = false;
                break;
            }
        }
    }
 
    printf("%s\n", res ? "sim" : "nao");
 
    return 0;
}