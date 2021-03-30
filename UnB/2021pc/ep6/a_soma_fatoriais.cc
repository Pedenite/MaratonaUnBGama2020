#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod (int) (1E9+7)
#define MAX (int) (1E5+1)

int fat[MAX];

void compute_facts(int n) {
    fat[0] = fat[1] = 1;
    for (int i = 2; i <= n; i++) {
        fat[i] = (int) (((ll) i * (ll) fat[i-1])%mod);
    }
}

int main() {
    int x, y;

    scanf("%d %d", &x, &y);
    compute_facts(max(x, y));

    printf("%d\n", (fat[x] + fat[y])%mod);

    return 0;
}
