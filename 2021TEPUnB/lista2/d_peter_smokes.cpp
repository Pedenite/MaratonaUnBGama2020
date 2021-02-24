#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, nova, cigs;

    while (scanf("%d %d", &n, &k) != EOF) {
        nova = (n/k);
        cigs = n + nova;
        while (nova >= k) {
            nova /= k;
            if (nova % k) {
                nova = nova;
            }
            cigs += nova;
        }

        printf("%d\n", cigs);
    }

    return 0;
}
