#include <bits/stdc++.h>
using namespace std;

#define sc1(x) scanf("%d", &x)

int contaminados(int i, int k) {
    if (i <= 2)
        return 1;

    return k * (ceil((double) contaminados(i-1, k)/2) + ceil((double) contaminados(i-2, k)));
}

int main() {
    int n;

    sc1(n);
    printf("%d\n", contaminados(n, 4) - contaminados(n, 3));

    return 0;
}
