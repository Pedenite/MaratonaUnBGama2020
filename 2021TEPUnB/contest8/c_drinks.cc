#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, pi;
    double p = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pi);
        p += (double) pi/100;
    }

    printf("%lf\n", (p/n)*100);

    return 0;
}
