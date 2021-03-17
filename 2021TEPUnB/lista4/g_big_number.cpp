#include <bits/stdc++.h>
using namespace std;

int fact_digits(int x) {
    if (x <= 1) {
        return 1;
    }

    double d = 0;
    for (int i = 2; i <= x; i++) {
        d += log10(i);
    }

    return floor(d+1);
}

int main() {
    int t, n;

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        cout << fact_digits(n) << endl;
    }

    return 0;
}
