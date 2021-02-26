#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    string n;
    int res;

    while (true) {
        cin >> n;
        if (n == "0") {
            break;
        }
        res = 0;

        reverse(n.begin(), n.end());
        int i = 2;
        for (auto c : n) {
            c -= 0x30;
            res += c*(i-1);
            i <<= 1;
        }

        printf("%d\n", res);
    }

    return 0;
}
