#include <bits/stdc++.h>
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

uint solve(uint n) {
    ull res;
    for (int i = 7; i < 64; i++) {
        res = 1 << 7;
    }
}

int main() {
    uint n;

    while (scanf("%u", &n) != EOF) {
        uint res = solve(n);
        if (res > 0) {
            printf("%d\n", res);
        } else {
            printf("no power of 2\n");
        }
    }

    return 0;
}