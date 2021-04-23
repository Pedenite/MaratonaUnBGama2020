#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, res = 0;

    scanf("%d %d", &n, &m);
    if (n < m) {
        printf("-1\n");
        return 0;
    }

    res += n/2;
    res += n%2;
    while (res % m) {
        res++;
    }

    printf("%d\n", res);

    return 0;
}
