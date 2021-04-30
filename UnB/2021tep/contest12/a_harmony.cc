#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, k;

    scanf("%d %d", &a, &b);
    k = (a+b)/2;
    
    if (abs(a-k) != abs(b-k)) {
        printf("IMPOSSIBLE\n");
    } else {
        printf("%d\n", k);
    }

    return 0;
}
