#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, curr_odd = 1, curr_even = 2;
    bool invert = false;

    scanf("%d", &n);
    int qtd_even = n/2;
    for (int i = 0; i < n; i++) {
        if (qtd_even == 0) {
            invert = true;
        }
        for (int j = 0; j < n; j++) {
            if (j < qtd_even || j >= n-qtd_even) {
                printf("%d ", curr_even);
                curr_even += 2;
            } else {
                printf("%d ", curr_odd);
                curr_odd += 2;
            }
        }

        printf("\n");
        if (invert) {
            qtd_even++;
        } else {
            qtd_even--;
        }
    }

    return 0;
}
