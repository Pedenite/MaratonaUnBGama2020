#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, usado, cigs;

    while (scanf("%d %d", &n, &k) != EOF) {
        usado = n;
        cigs = n;
        while (usado >= k) {
            // printf("%d\n", usado);
            n = usado/k;
            usado %= k; 
            usado += n;
            cigs += n;
        }

        printf("%d\n", cigs);
    }

    return 0;
}
