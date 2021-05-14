#include <bits/stdc++.h>
using namespace std;

#define MAX 3640

int main() {
    double r, v, i, j, a = 0;
    int res;

    scanf("%lf %lf %lf %lf", &r, &v, &i, &j);
    i /= 100;
    j /= 100;
    for (res = 0; a < v && res < MAX; res++) {
        a += a*i;
        a += r;
        v -= v*j;
    }

    if (a < v) {
        printf("-1\n");
    } else {
        printf("%d\n", res);
    }

    return 0;
}
