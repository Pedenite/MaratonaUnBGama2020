#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void encher(vi &a, int p, int x, int &l, int &r) {
    p--;
    int temp_l = 0x7fffffff;
    int temp_r = -1;
    while (x > 0 && p < a.size()) {
        if (x > a[p]) {
            x -= a[p];
            a[p] = 0;
            temp_l = min(temp_l, p);
            temp_r = max(temp_r, p);
        } else {
            a[p] -= x;
            x = 0;
        }

        p++;
        if (l >= 0 && p >= l && p <= r) {
            p = r;
        }
    }

    if (l < 0 || temp_r-temp_l > r-l) {
        l = temp_l;
        r = temp_r;
    }
}

int main() {
    int n, ai, m, opt, p, x, k, l = -1, r = -1;
    vi a, b;

    scanf("%d", &n);
    while (n--) {
        scanf("%d", &ai);
        a.pb(ai);
    }

    b = a;
    scanf("%d", &m);
    while (m--) {
        scanf("%d", &opt);
        if (opt == 1) {
            scanf("%d %d", &p, &x);
            encher(a, p, x, l, r);
        } else {
            scanf("%d", &k);
            k--;
            printf("%d\n", b[k]-a[k]);
        }
    }

    return 0;
}
