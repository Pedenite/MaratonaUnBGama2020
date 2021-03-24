#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define MAX (int) (1E6+5)

vi isPrime(MAX,1);
int primos[MAX];

void compute_primes() {
    isPrime[1] = 0;
    primos[0] = 0;
    primos[1] = 0;
    for (int x = 2; x <= MAX; x++) {
        primos[x] = primos[x-1];
        if (x > 2) isPrime[x-1] = 0;
        if (isPrime[x]) {
            primos[x]++;
            for (int m = x+x; m <= MAX; m=m+x) {
                isPrime[m] = 0;
            }
        }
    }

    isPrime[2] = 1;
}

int main() {
    int q, l, r;

    compute_primes();
    scanf("%d", &q);
    while (q--) {
        scanf("%d %d", &l, &r);
        printf("%d\n", primos[r] - primos[l-1]);
    }

    return 0;
}
