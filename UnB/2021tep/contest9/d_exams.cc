#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    if (k <= 3*n) {
        printf("%d\n", 3*n - k);
    } else {
        printf("0\n");
    }

    return 0;
}
