#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back
#define MAX (int) (1E6+5)

vi primes;
vi is_prime(MAX, 1);

void compute_primes() {
    primes.pb(2);
    for (int i = 3; i <= MAX; i += 2) {
        if (!is_prime[i]) {
            continue;
        }

        primes.push_back(i);
        for (int j = i+i; j <= MAX; j += i)
            is_prime[j] = false;
    }
}

int main() {
    int n, res, tmp;

    compute_primes();
    while (scanf("%d", &n) && n) {
        res = 0;
        tmp = n;
        for (int i = 0; primes[i] < tmp; i++) {
            if (tmp%primes[i]) {
                continue;
            }

            res++;
            while (tmp%primes[i] == 0) {
                tmp /= primes[i];
            }

        }
        
        if (tmp != 1) {
            res++;
        }

        printf("%d : %d\n", n, res);
    }

    return 0;
}
