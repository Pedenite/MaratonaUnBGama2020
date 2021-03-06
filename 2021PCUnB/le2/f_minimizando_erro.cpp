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
    i = 0;
    while (k > 0) {
        if (c[i] == c[i+1]) {
            i++;
            continue;
        }

        int tmp = min((c[i]-c[i+1])*(i+1), k);
        k -= tmp;
        c[i] -= tmp/(i+1);
        k += tmp%(i+1);

        if (k <= i) {
            for (int j = 0; j <= i; j++) {
                if (k == 0) {
                    break;
                }

                c[j]++;
                k--;
            }
        }
    }

    sum += pow(c[i], 2) * (i+1);
    i++;
    for (; i < c.size(); i++) {
        sum += pow(c[i], 2);
    }

    printf("%d\n", sum);

    return 0;
}
