#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main() {
    int n, ai, res;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ai);
        if (i) {
            res = gcd(res, ai);
        } else {
            res = ai;
        }
    }

    printf("%d\n", res);

    return 0;
}
