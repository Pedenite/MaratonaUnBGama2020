#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, maior = 0;

    cin >> x;
    if (x < 4) {
        cout << x << endl;
        return 0;
    }

    for (int i = 2; pow(i, 2) <= x; i++) {
        for (int j = 2; pow(i, j) <= x; j++) {
            int res = pow(i, j);
            if (res > maior) {
                maior = res;
            }
        }
    }

    cout << maior << endl;

    return 0;
}
