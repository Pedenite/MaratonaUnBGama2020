#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

void eliminate(int x, vi &d) {
    d[x] = 0;
    for (int i = x; i < d.size(); i += x) {
        d[i] = 0;
    }
}

int main() {
    int k, l, m, n, d;

    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
    vi dragons(d+5, 1);

    eliminate(k, dragons);
    eliminate(l, dragons);
    eliminate(m, dragons);
    eliminate(n, dragons);

    int res = 0;
    for (int i = 1; i <= d; i++) {
        if (dragons[i] == 0)
            res++;
    }

    printf("%d\n", res);

    return 0;
}
