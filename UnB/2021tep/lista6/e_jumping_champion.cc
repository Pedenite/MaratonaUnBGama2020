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
    int t, l, u, n;
    bool valid = false;

    vi diffs(200, 0);
    compute_primes();

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &l, &u);
        fill(diffs.begin(), diffs.end(), 0);
        l = lower_bound(primos.begin(), primos.end(), l)-primos.begin();
        u = upper_bound(primos.begin(), primos.end(), u)-primos.begin();
        n = 0;
        for (int i = l+1; i < u; i++) {
            int d = primos[i] - primos[i-1];
            diffs[d]++;
            if (diffs[d] > diffs[n]) {
                valid = true;
                n = d;
            } else if (diffs[d] == diffs[n]) {
                valid = false;
            }
        }

        if (valid) {
            printf("The jumping champion is %d\n", n);
        } else {
            printf("No jumping champion\n");
        }
    }

    return 0;
}
