#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back

int main() {
    int n, m, pi, x, y, diff = 0x7fffffff;
    vi p;

    cin >> n >> m;
    while (n--) {
        cin >> pi;
        p.pb(pi);
    }

    sort (p.begin(), p.end());

    for (int i = 0; i < p.size(); i++) {
        int esperado = m - p[i];
        int index = lower_bound(p.begin(), p.end(), esperado)-p.begin();
        if (index < p.size() && p[index] == esperado && i != index && abs(p[i]-esperado) < diff) {
            diff = abs(p[i]-esperado);
            x = p[i];
            y = p[index];
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}
