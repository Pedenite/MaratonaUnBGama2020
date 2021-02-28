#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, k1, k2, ai, bi, sum = 0;
    vi a, b;

    scanf("%d %d %d", &n, &k1, &k2);
    int i = n;
    while (i--) {
        scanf("%d", &ai);
        a.pb(ai);
    }

    i = n;
    while (i--) {
        scanf("%d", &bi);
        b.pb(bi);
    }

    while (n--) {
        int op = abs(a[i] - b[i]);
        op;//...

        sum += pow(op, 2);
    }

    printf("%d\n", sum);

    return 0;
}
