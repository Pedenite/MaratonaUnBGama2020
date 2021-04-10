#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (1e7+1)

int divs[MAX];

void compute_divs() {
    divs[0] = 0;
    for(int x = 1; x < MAX; x++) {
        for(int m = x; m < MAX; m += x) {
            divs[m] += x;
        }
    }
}

int main() {
    int t, c;

    compute_divs();

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &c);
        int res = -1;
        for (int i = 1; i < MAX; i++) {
            if (divs[i] == c) {
                res = i;
                break;
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
