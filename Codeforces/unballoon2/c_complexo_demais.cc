#include <bits/stdc++.h>
using namespace std;

#define sc2(x, y) scanf("%d %d", &x, &y)

int main() {
    int a, b, c, d;

    sc2(a, b);
    sc2(c, d);

    int x = a*c - b*d;
    int y = b*c + a*d;

    printf("(%d) + (%di)\n", x, y);

    return 0;
}
