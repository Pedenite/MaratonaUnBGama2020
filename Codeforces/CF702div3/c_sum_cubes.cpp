#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

ll cubic(ll x) {
    return x*x*x;
}

int main() {
    int t;
    ll x, sum;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x;
        for (ll a = 1; cubic(a)*2 <= x; a++) {
            sum = 0;
            for (ll b = a; sum < x; b++) { //TLE
                sum = cubic(a) + cubic(b);
                // printf("%lld\n", sum);
            }

            if (sum == x) {
                break;
            }
        }

        if (sum == x) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
