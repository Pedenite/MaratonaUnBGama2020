#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    printf("%d\n", (n*(n-1) + m*(m-1))/2);

    return 0;
}
