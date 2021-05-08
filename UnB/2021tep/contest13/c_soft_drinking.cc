#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int drink = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    int res = min(drink, lime);
    res = min(res, salt);

    printf("%d\n", res/n);

    return 0;
}
