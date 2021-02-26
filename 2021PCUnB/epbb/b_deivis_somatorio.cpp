#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    ll x, res;

    cin >> x;
    res = sqrt(2*x +0.25) - 0.5;
    printf("%lld\n", res+1);

    return 0;
}
