#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return !b ? a : gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a/gcd(a, b)) * b;
}


int main() {
    int x, y, a, b, an, bn, div;

    scanf("%d %d %d %d", &x, &y, &a, &b);
    div = lcm(x, y);
    an = a/div;
    bn = b/div;

    int res = bn-an;

    if (an*div == a) {
        res++;
    }

    printf("%d\n", res);

    return 0;
}
