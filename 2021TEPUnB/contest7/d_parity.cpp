#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, k, ai;
    bool n = true;

    cin >> b >> k;
    while (k--) {
        cin >> ai;
        if (ai == 0) {
            continue;
        }

        bool tmp;
        if (ai%2 == 0 || b%2 == 0 && k != 0) {
            tmp = true;
        } else {
            tmp = false;
        }

        if (n != tmp) {
            n = false;
        } else {
            n = true;
        }
    }

    printf("%s\n", n ? "even" : "odd");

    return 0;
}
