#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

unsigned int solve(unsigned int n, unsigned int l, unsigned int u) {
    unsigned int maior = 0;
    for (unsigned int i = l; i <= u; i++) {
        if ((i | n) > (maior | n)) {
            maior = i;
        }
    }

    return maior;
}

int main() {
    unsigned int n, l, u;

    while (scanf("%u %u %u", &n, &l, &u) != EOF) {
        printf("%u\n", solve(n, l, u));
    }

    return 0;
}
