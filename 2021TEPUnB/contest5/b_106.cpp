#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

ll test(ll a, ll b) {
    return pow(3, a) + pow(5, b);
}

int main() {
    ll n, res = 0, a = 0, b = 0;

    scanf("%lld", &n);
    while (res < n) {
        res = test(a, b);
        if (a <= b) {
            a++;
        } else {
            b++;
            a--;
        }
    }

    if (res == n) {
        printf("%lld\n", res);
    } else {
        printf("-1\n");
    }

    return 0;
}
