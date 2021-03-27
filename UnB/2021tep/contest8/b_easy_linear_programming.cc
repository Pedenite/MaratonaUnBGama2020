#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, k, res = 0;

    scanf("%d %d %d %d", &a, &b, &c, &k);
    res += min(k, a);
    k -= a;
    if (k > 0) {
        k -= b;
        if (k > 0) {
            res -= min(k, c);
        }
    }

    printf("%d\n", res);

    return 0;
}
