#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, k, res = 0, c = 0;

    scanf("%lld %lld", &n, &k);
    for (int i = 1; i <= n; i++) {
        c += i;
        res = c-k;
        if (res >= 0 && n == res+i)
            break;
    }

    printf("%lld\n", res);

    return 0;
}
