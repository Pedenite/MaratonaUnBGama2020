#include <bits/stdc++.h>
using namespace std;

const string digits { "0123456789ABCDEF" };

int main() {
    int n, b;
    string res;

    scanf("%d %d", &n, &b);

    do {
        int r = n%(-b);
        n /= -b;
        if (r < 0) {
            r += b;
            n += 1;
        }

        res.push_back(digits[r]);
    } while (n);

    reverse(res.begin(), res.end());
    cout << res << endl;

    return 0;
}
