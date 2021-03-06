#include <bits/stdc++.h>

using namespace std;

#define vll vector<ll>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define M 1000000007

string max_val(int n) {
    string a = "";
    while (n--) {
        a += '1';
    }

    return a;
}

int main() {
    int n;
    string l, r;

    cin >> n;
    cin >> l >> r;

    if (l[0] != r[0]) {
        cout << max_val(n) << '\n';
    } else {
        cout << r << '\n';
    }

    return 0;
}
