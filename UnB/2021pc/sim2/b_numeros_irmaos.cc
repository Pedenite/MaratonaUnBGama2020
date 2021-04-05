#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
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
    ll n, m;

    scanf("%lld %lld", &n, &m);


    return 0;
}
