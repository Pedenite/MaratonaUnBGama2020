#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

string to_lower(string s) {
    string str = "";
    for (char c : s) {
        if (c < 0x61) {
            c += 0x20;
        }
        str += c;
    }
    return str;
}

int main() {
    string a, b;

    cin >> a >> b;
    a = to_lower(a);
    b = to_lower(b);
    int res = a.compare(b);

    if (res < 0) {
        res = -1;
    } else if (res > 0) {
        res = 1;
    }

    cout << res << "\n";

    return 0;
}
