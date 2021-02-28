#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, b, mi, fi, u, v = 0;
    queue<int> m, f;

    scanf("%d %d %d", &n, &u, &b);
    int i = n;
    while (i--) {
        scanf("%d", &mi);
        m.push(mi);
    }

    i = n;
    while (i--) {
        scanf("%d", &fi);
        f.push(fi);
    }

    int fim = n;
    for (i = 0; i < fim; i++) {
        mi = m.front();
        fi = f.front();
        m.pop();
        f.pop();
        if (fi == 1) {
            bool sucesso = false;
            if (u != 0) {
                sucesso = true;
                u -= mi/b;
                u = max(u, 0);
            }

            if (!sucesso && i < n) {
                m.push(mi);
                f.push(fi);
                fim++;
            }
        } else {
            v += mi;
            if (v >= b) {
                int tmp = v/b;
                u += tmp;
                v -= tmp*b;
            }
        }
    }

    printf("%d\n", u*b + v);

    return 0;
}
