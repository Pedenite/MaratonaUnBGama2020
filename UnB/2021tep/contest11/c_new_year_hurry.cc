#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    int t = 240 - k;
    if (t < 5) {
        printf("0\n");
        return 0;
    }

    int i = 1;
    while (i < n) {
        t -= i*5;

        i++;
        if (t < i*5) {
            i--;
            break;
        }
    }

    printf("%d\n", i);

    return 0;
}
