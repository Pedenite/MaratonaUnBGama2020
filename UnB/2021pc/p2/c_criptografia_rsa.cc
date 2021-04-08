#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define MAX (int) (1e7+1)

vi primes;
vi is_prime(MAX, 1);

void compute_primes(int n) {
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i+i; j <= n; j += i)
                is_prime[j] = 0;
        }
    }
}

int main() {
    int m, res = 0;

    scanf("%d", &m);
    compute_primes(m);

    for (int i = 0; i < primes.size(); i++) {
        for (int j = i+1; j < primes.size(); j++) {
            if ((ll) primes[i] * (ll) primes[j] > (ll) m) {
                break;
            }

            res++;
        }
    }

    printf("%d\n", res);

    return 0;
}
