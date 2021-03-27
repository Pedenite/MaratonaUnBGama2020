#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    ll n, ai, mult = 1;
    bool over = false;

    scanf("%lld", &n);
    while (n--) {
        scanf("%lld", &ai);

        if (!over) {
            mult *= ai;
        }
        if (ai == 0) {
            mult = 0;
            break;
        }

        if (mult > 1000000000000000000 || mult <= 0) {
            mult = 1;
            over = true;
        }
    }

    if (over && mult != 0) {
        mult = -1;
    }

    printf("%lld\n", mult);

    return 0;
}
