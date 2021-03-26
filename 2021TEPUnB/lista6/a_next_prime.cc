#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define MAX (int) (1E5+5)

vi isPrime(MAX,1);
vi primos;

void compute_primes() {
    isPrime[1] = 0;

    primos.push_back(2);
    for (int x = 2; x <= MAX; x++) {
        if (x > 2) isPrime[x-1] = 0;
        if (isPrime[x]) {
            primos.push_back(x);
            for (int m = x+x; m <= MAX; m=m+x) {
                isPrime[m] = 0;
            }
        }
    }

    isPrime[2] = 1;
}

int main() {
    int x;

    compute_primes();
    scanf("%d", &x);
    printf("%d\n", primos[lower_bound(primos.begin(), primos.end(), x)-primos.begin()]);

    return 0;
}
