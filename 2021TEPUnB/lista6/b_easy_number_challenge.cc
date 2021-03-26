#include <bits/stdc++.h>
using namespace std;

#define mod 0x40000000
#define MAX (int) (1E6+5)

int divs[MAX];

void compute_divs() {
    divs[0] = 0;
    for (int x = 1; x < MAX; x++) {
        for (int m = x; m < MAX; m += x) {
            divs[m]++;
        }
    }
}

int main() {
    int a, b, c, sum = 0;

    compute_divs();
    scanf("%d %d %d", &a, &b, &c);
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                sum += divs[i*j*k]%mod;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
