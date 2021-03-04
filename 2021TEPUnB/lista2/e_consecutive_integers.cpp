#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n, resl, resr, res;

    while (true) {
        scanf("%d", &n);
        if (n == -1) {
            break;
        }

        resl = resr = res = 1;
        while (res != n) {
            if (res > n) {
                res -= resl;
                resl++;
            } else if (res < n) {
                resr++;
                res += resr;
            }
        }

        printf("%d = %d + ... + %d\n", n, resl, resr);
    }

    return 0;
}
