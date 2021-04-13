#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main() {
    int n, x, xi, xant, res, d;

    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &xi);
        if (i) {
            d = abs(xi-xant);
            res = gcd(d, res);
        } else {
            res = d = abs(x-xi);
        }

        xant = xi;
    }

    printf("%d\n", res);

    return 0;
}
