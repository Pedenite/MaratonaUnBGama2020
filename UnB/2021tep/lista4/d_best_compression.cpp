#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll get_max(ll b) {
    b++;
    return 1LL << b;
}

int main() {
    ll n, b;

    while (scanf("%lld %lld", &n, &b) != EOF) {
        if (n < get_max(b)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    
    return 0;
}
