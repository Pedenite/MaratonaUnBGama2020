#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {
    // code

    return 0;
}
