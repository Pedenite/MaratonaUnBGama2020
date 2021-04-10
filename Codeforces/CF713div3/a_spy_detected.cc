#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, ai, eq, eq1, res, res1, res2;

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        eq = eq1 = 0;
        res = 0;
        for (int i = 1; i <= n; i++) {
            scanf("%d", &ai);
            if (res) {
                continue;
            }

            if (eq && eq1) {
                res = ai == eq ? res2 : res1;
            } else if (!eq) {
                eq = ai;
                res1 = i;
            } else if (ai != eq) {
                if (i <= 2) {
                    eq1 = ai;
                    res2 = i;
                } else {
                    eq = ai;
                    res = i;
                }
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
