#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];

    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int dif[] = {abs(a[0]-a[1]), abs(a[0]-a[2]), abs(a[1]-a[2])};

    int maior = 0, res = 0;
    for (int i = 0; i < 3; i++) {
        maior = max(maior, dif[i]);
        res += dif[i];
    }

    printf("%d\n", res-maior);

    return 0;
}
