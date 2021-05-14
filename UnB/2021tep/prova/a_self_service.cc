#include <bits/stdc++.h>
using namespace std;

int main() {
    double g, d, r;

    scanf("%lf %lf %lf", &g, &d, &r);
    g /= 1000;
    if (d > 0) {
        d = 1-d/100;
        r = r/d;
    }

    printf("%.8lf\n", r/g);

    return 0;
}
