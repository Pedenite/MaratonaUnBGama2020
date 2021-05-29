#include <bits/stdc++.h>
using namespace std;

#define rep(n) for(int i=0; i<(int)(n); i++)
#define sc1(x) scanf("%d", &x)
#define sc2(x, y) scanf("%d %d", &x, &y)

int p[1001][1001];

int main() {
    int n, m, q, x, y, res = 0;

    sc2(n, m);
    sc1(q);

    rep (m) {
        sc2(x, y);
        p[x][y]++;
    }

    rep (q) {
        sc2(x, y);
        res += p[x][y] + p[x-1][y] + p[x][y-1] + p[x+1][y] + p[x][y+1];
        p[x][y] = p[x-1][y] = p[x][y-1] = p[x+1][y] = p[x][y+1] = 0;
    }

    printf("%d\n", res);

    return 0;
}
