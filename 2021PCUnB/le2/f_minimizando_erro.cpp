#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, k1, k2, k, ai, bi, sum = 0;
    vi a, c;

    scanf("%d %d %d", &n, &k1, &k2);
    int i = n;
    while (i--) {
        scanf("%d", &ai);
        a.pb(ai);
    }

    i = 0;
    while (i < n) {
        scanf("%d", &bi);
        c.pb(abs(a[i] - bi));
        i++;
    }

    sort(c.begin(), c.end(), greater<int>());

    k = k1 + k2;
    while (k > 0) {
        i = 0;
        while (c[i] == c[i+1]) {
            i++;
            if (i == c.size()-1) {
                break;
            }
        }

        k--;
        c[i]--;
        if (c[i] < 0) {
            c[i] = 1;
        }
    }

    for (i = 0; i < c.size(); i++) {
        sum += pow(c[i], 2);
    }

    printf("%d\n", sum);

    return 0;
}
