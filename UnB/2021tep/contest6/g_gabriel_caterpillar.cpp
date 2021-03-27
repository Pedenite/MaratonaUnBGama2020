#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int h1, h2, h, a, b, k;

    cin >> h1 >> h2 >> a >> b;
    h1 += 8*a;
    if (h1 >= h2) {
        k = 0;
    } else if (a <= b) {
        k = -1;
    } else {
        h = (a-b)*12;
        k = (h2-h1)/h;
        if ((h2-h1)%h) {
            k++;
        }
    }

    cout << k << endl;

    return 0;
}
