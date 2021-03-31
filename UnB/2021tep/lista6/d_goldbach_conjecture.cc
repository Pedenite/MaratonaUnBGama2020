#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define MAX (int) (1e6+1)

vi primos;
vi is_prime(MAX, 1);

void compute_primes() {
    primos.push_back(2);
    for (int i = 3; i <= MAX; i += 2) {
        if (is_prime[i]) {
            primos.push_back(i);
            for (int j = i+i; j <= MAX; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {
    int n, x, y;

    compute_primes();

    while (scanf("%d", &n) && n != 0) {
        for (int i = 0; primos[i] < n; i++) {
            x = y = 0;
            for (int j = 0; primos[j] < n; j++) {
                if (primos[i] + primos[j] == n) {
                    x = primos[i];
                    y = primos[j];
                    break;
                } else if (primos[i] + primos[j] > n) {
                    break;
                }
            }

            if (x || y) {
                break;
            }
        }

        if (x || y) {
            printf("%d = %d + %d\n", n, x, y);
        } else {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }

    return 0;
}
