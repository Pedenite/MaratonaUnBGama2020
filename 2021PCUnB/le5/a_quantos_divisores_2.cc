#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (1E6+5)

int divs[MAX];

void compute_divs() {
    int b, qtd;
    divs[0] = 0;
    divs[1] = 1;

    for (int n = 2; n < MAX; n++) {
        qtd = 0;
        for (int i = 1; i*i <= n; i++) {
            if (n % i)
                continue;

            b = n/i;
            qtd++;
            if (i != b)
                qtd++;
        }

        divs[n] = qtd;
    } 
}

int main() {
    int q, x;

    compute_divs();
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &x);
        printf("%d\n", divs[x]);
    }

    return 0;
}
