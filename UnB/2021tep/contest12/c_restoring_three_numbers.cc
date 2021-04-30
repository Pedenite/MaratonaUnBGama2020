#include <bits/stdc++.h>
using namespace std;

int main() {
    int x[4], maior = 0;

    scanf("%d %d %d %d", &x[0], &x[1], &x[2], &x[3]);
    for (int i = 0; i < 4; i++) {
        if (x[i] > x[maior]) {
            maior = i;
        }
    }

    if (maior < 3) {
        int temp = x[3];
        x[3] = x[maior];
        x[maior] = temp;
    }

    for (int i = 0; i < 3; i++) {
        printf("%d ", x[3]-x[i]);
    }

    printf("\n");

    return 0;
}
