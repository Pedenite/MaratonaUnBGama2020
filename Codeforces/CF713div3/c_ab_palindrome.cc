#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define MAX (int) (1e6+1)
#define mod (int) (1e9+7)
#define forn(j,n) for(int i = j; i < n; i++)

int main() {
    int t, a, b, n;
    string s;

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        cin >> s;
        n = a+b;

        for (auto c : s) {
            if (c == '0') {
                a--;
            } else if (c == '1') {
                b--;
            }
        }

        if (a < 0 || b < 0) {
            printf("-1\n");
            continue;
        }

        int i = 0, j = n-1;
        bool pos = true;
        while (i < n/2) {
            if (s[i] != s[j] && s[i] != '?' && s[j] != '?') {
                pos = false;
                break;
            }

            if (s[i] != '?' && s[j] == '?') {
                s[j] = s[i];
                if (s[i] == '0') {
                    a--;
                } else {
                    b--;
                }
            } else if (s[j] != '?' && s[i] == '?') {
                s[i] = s[j];
                if (s[j] == '0') {
                    a--;
                } else {
                    b--;
                }
            } else if (s[i] == s[j] && s[i] == '?') {
                char chosen;
                if (a > b) {
                    chosen = '0';
                    a -= 2;
                } else {
                    chosen = '1';
                    b -= 2;
                }
                s[i] = s[j] = chosen;
            }

            if (a < 0 || b < 0) {
                pos = false;
                break;
            }

            i++;
            j--;
        }

        if (n%2 != 0) {
            if (s[n/2] == '?') {
                if (a > 0) {
                    s[n/2] = '0';
                    a--;
                } else {
                    s[n/2] = '1';
                    b--;
                }
            }
        }

        if (a < 0 || b < 0) {
            pos = false;
        }

        if (pos) {
            cout << s << endl;
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
