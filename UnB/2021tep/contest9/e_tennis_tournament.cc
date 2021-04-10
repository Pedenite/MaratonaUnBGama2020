#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b, p;

    scanf("%d %d %d", &n, &b, &p);
    int bpr = 2*b + 1;
    int tot_b = (n-1)*bpr;
    int tot_p = n*p;

    printf("%d %d\n", tot_b, tot_p);

    return 0;
}
