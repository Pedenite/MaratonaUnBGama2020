#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back
#define MAX (int) (1E6+5)

vi primes;
vi is_prime(MAX, 1);

void compute_primes() {
    primes.pb(2);
    for (int i = 3; i <= MAX; i += 2) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i+i; j <= MAX; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {
    int q;
    ll x;

    compute_primes();

    scanf("%d", &q);
    while (q--) {
        scanf("%lld", &x);
        double xd = sqrt(x);
        if (floor(xd) != xd) {
            printf("0\n");
            continue;
        }

        x = xd;
        printf("%d\n", binary_search(primes.begin(), primes.end(), x));
    }

    return 0;
}
