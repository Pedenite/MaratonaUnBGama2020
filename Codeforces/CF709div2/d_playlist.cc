#include <bits/stdc++.h>
using namespace std;

#define vint vector<int>
#define pb push_back

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {
    int t, n, ai, i, j;
    vint a, r;
    bool ini_subst;

    cin >> t;
    while (t--) {
        a.clear();
        r.clear();
        cin >> n;
        while (n--) {
            cin >> ai;
            a.pb(ai);
        }

        ini_subst = gcd(a[a.size()-1], a[0]) == 1;
        for (i = 0; i < a.size(); i++) {
            if (a[i] == 0) {
                continue;
            }

            j = i+1;
            while (j <= a.size()) {
                if (j == a.size()) {
                    j = 0;
                    break;
                }

                if (a[j] != 0) {
                    break;
                }

                j++;
            }

            if (gcd(a[i], a[j]) == 1) {
                a[j] = 0;
                r.pb(j+1);
                if (i != 0 || !ini_subst) {
                    i--;
                }
            }
        }

        if (a.size()-r.size() == 1 && a[0] == 1) {
            r.pb(1);
        }

        cout << r.size();
        for (auto e : r) {
            cout << ' ' << e;
        }
        cout << endl;
    }

    return 0;
}
