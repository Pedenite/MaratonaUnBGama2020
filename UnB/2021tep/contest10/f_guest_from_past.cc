#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, a, b, c, dif, res = 0;

    scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
    if (a <= b-c) {
        res = n/a;
        n = 0;
    }

    while (n >= a || n >= b) {
        if (n >= b) {
            dif = (n-c)/(b-c);
            n -= dif*(b-c);
            res += dif;
        } else {
            dif = n/a;
            n -= dif*a;
            res += dif;
        }
    }

    printf("%lld\n", res);

    return 0;
}
