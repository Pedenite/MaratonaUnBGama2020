#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        if (n <= 1) {
            cout << 1 << endl;
            continue;
        }

        if (!(n%2)) {
            n++;
        }

        cout << ceil(log2(n)) << endl;
    }

    return 0;
}
