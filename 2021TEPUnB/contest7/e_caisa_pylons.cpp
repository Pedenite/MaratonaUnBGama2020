#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, hi, energy = 0, cost = 0, last = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> hi;
        energy += last-hi;
        if (energy < 0) {
            cost += -energy;
            energy += -energy;
        }

        last = hi;
    }

    cout << cost << endl;

    return 0;
}
