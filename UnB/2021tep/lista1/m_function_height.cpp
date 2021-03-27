#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    ll n, k, res;

    cin >> n >> k;
    if (n >= k) {
        res = 1;
    } else {
        res = k/n;
        if (k%n != 0) {
            res++;
        }
    }

    printf("%lld\n", res);

    return 0;
}
