#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>



int main() {
    string t1, t2, s, res;
    int n; 
    char decode;

    cin >> t1 >> t2 >> n;
    for (int i  = 0; i < n; i++) {
        cin >> s;
        res = "";
        for (auto c : s) {
            if (c >= 0x41 && c <= 0x5a || c >= 0x61 && c <= 0x7a) {
                for (int j = 0; j < 26; j++) {
                    if (c == t1[j] || (c+0x20) == t1[j]) {
                        decode = t2[j]-t1[j];
                        break;
                    }
                }

                c += decode;
            }

            res += c;
        }

        cout << res << "\n";
    }

    return 0;
}
