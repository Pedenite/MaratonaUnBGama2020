#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, atr[5][5];

    scanf("%d", &l);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &atr[i][j]);
        }
    }

    int hp = ((atr[0][1] + atr[0][0] + (sqrt(atr[0][2])/8) + 50) * l/50) + 10;
    printf("%d", hp);

    for (int i = 1; i < 4; i++) {
        int s = ((atr[i][1] + atr[i][0] + (sqrt(atr[i][2])/8)) * l/50) + 5;
        printf(" %d", s);
    }

    printf("\n");

    return 0;
}
