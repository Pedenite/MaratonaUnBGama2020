#include <bits/stdc++.h>
using namespace std;

#define MAX 101

vector<int> g[MAX];

int main() {
    int n, m, a, b, s, t;

    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d %d", &a, &b);
        g[a].push_back(b);
        g[b].push_back(a);
    }

    scanf("%d %d", &s, &t);

    return 0;
}
