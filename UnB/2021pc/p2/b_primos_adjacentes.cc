#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define MAX (int) (1e6+1)

vi primes;
vi is_prime(MAX, 1);

void compute_primes() {
    primes.push_back(2);
    for (int i = 3; i <= MAX; i += 2) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i+i; j <= MAX; j += i)
                is_prime[j] = 0;
        }
    }
}

int main() {
    int q, n, m, x, y, diff;

    compute_primes();
    scanf("%d", &q);
    while (q--) {
        x = y = 0;
        diff = 0x7fffffff;
        scanf("%d %d", &n, &m);
        if (n <= 2 && m >= 3) {
            printf("2 3\n");
            continue;
        }

        int i = lower_bound(primes.begin(), primes.end(), n)-primes.begin();
        for (; i+1 < primes.size() && primes[i+1] <= m; i++) {
            if (primes[i+1] - primes[i] < diff) {
                diff = primes[i+1] - primes[i];
                x = primes[i];
                y = primes[i+1];
            }

            if (diff == 2) {
                break;
            }
        }

        if (x == 0) {
            printf("-1\n");
        } else {
            printf("%d %d\n", x, y);
        }
    }

    return 0;
}
