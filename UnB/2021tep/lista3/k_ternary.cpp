#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    string res;

    while (scanf("%lld", &n) && n >= 0) {
        res = "";
        if (n == 0) {
            res = "0";
        }
        
        while (n > 0) {
            res += to_string(n%3);
            n /= 3;
        }

        reverse(res.begin(), res.end());
        cout << res << endl;
    }

    return 0;
}
