#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX (int) 1E5+1

int tabx[MAX];
int taby[MAX];

int main() {
    int n, m, xi, yi, totalx, totaly;

    scanf("%d %d", &n, &m);
    totalx = totaly = n;
    while (m--) {
        scanf("%d %d", &xi, &yi);
        xi--;
        yi--;
        if (tabx[xi] == 0) {
            tabx[xi] = 1;
            totalx--;
        }

        if (taby[yi] == 0) {
            taby[yi] = 1;
            totaly--;
        }

        printf("%lld ", (ll)totalx*(ll)totaly);
    }

    printf("\n");

    return 0;
}
