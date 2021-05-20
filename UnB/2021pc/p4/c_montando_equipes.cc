#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, yi, tot = 0;

    scanf("%d %d", &n, &k);
    k = 5-k;
    for (int i = 0; i < n; i++) {
        scanf("%d", &yi);
        if (yi <= k)
            tot++;
    }

    printf("%d\n", tot/3);

    return 0;
}
