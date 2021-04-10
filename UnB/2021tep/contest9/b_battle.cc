#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    bool turn = true;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    while (a > 0 && c > 0) {
        if (turn) {
            c -= b;
        } else {
            a -= d;
        }

        turn = !turn;
    }

    printf("%s\n", a > 0 ? "Yes" : "No");

    return 0;
}
