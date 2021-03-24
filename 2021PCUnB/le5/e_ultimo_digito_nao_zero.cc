#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, m, arranjo = 1;

    scanf("%lld %lld", &n, &m);
    for (int i = n; i > n-m; i--) {
        arranjo *= i;
        while (!(arranjo%10)) {
            arranjo /= 10;
        }

        arranjo %= 10;
        cout << arranjo << " * " << i << endl;
    }

    printf("%lld\n", arranjo);

    return 0;
}
