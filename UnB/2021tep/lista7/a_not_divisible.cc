#include <bits/stdc++.h>
using namespace std;

#define MAX (int)(1e6+1)

int a[MAX];

int main() {
    int n, ai, res = 0;

    scanf("%d", &n);
    while (n--) {
        scanf("%d", &ai);
        a[ai]++;
    }

    for (int i = 1; i < MAX; i++) {
        if (a[i]) {
            for (int j = i+i; j < MAX; j += i) {
                a[j] = 0;
            }
        }

        if (a[i] > 1) {
            a[i] = 0;
        }
    }

    for (int i = 1; i < MAX; i++) {
        res += a[i];
    }

    printf("%d\n", res);

    return 0;
}
