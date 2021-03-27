#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, ai, bi;
    ll sum = 0;

    cin >> n;
    while (n--) {
        cin >> ai >> bi;
        ai--;
        ll as = (ai * (ai+1))/2;
        ll bs = (bi * (bi+1))/2;
        sum += bs-as;
    }

    cout << sum << endl;

    return 0;
}
