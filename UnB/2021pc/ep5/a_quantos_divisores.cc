#include <bits/stdc++.h>
using namespace std;

int qnt_divs(int n) {
    int divs = 0;
    int b;
    
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            b = n/i;
            divs++;
            if (i != b)
                divs++;
        }
    }

    return divs;
}

int main() {
    int x;

    scanf("%d", &x);
    printf("%d\n", qnt_divs(x));

    return 0;
}
