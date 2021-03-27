#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back

int main() {
    int t, n;
    vi a;

    cin >> t;
    while (t--) {
        cin >> n;
        a.clear();
        int m = 1;
        while (n > 0) {
            int tmp = n%10;
            if (tmp) {
                a.pb(tmp*m);
            }

            n /= 10;
            m *= 10;
        }

        cout << a.size() << endl;
        for (auto elem : a) {
            cout << elem << ' ';
        }
        cout << endl;
    }

    
    return 0;
}
