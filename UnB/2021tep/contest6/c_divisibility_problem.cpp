#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t, a, b, bn;

    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a%b == 0) {
            cout << 0 << endl;
            continue;
        }

        bn = b*(a/b)+b;
        cout << (bn-a) << endl;
    }

    return 0;
}
