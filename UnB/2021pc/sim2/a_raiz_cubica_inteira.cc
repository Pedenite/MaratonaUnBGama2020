#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define margem 0.0000001

int main() {
    ll n;

    scanf("%lld", &n);
    double res = cbrt(n);
    if (res - floor(res) < margem || ceil(res) - res < margem) {
        printf("%.0lf\n", res);
    } else {
        printf("-1\n");
    }

    return 0;
}
