#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

string bin_rep(int a) {
    string res = "";
    while (a > 0) {
        res += to_string(a&1);
        a >>= 1;
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int i, p, b;

    while (true) {
        scanf("%d", &i);
        if (i == 0) {
            break;
        }

        b = i;
        p = 0;
        while (i > 0) {
            if (i&1 == 1) {
                p++;
            }
            i >>= 1;
        }

        cout << "The parity of " << bin_rep(b) << " is " << p << " (mod 2).\n";
    }

    return 0;
}
