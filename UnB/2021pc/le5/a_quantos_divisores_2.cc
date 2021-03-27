#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (1E6+5)

int divs[MAX];

void compute_divs() {
    divs[0] = 0;
    for(int x = 1; x < MAX; x++) {
        for(int m = x; m < MAX; m += x) {
            divs[m]++;
        }
    }
}

int main() {
    int q, x;

    compute_divs();
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &x);
        printf("%d\n", divs[x]);
    }

    return 0;
}
