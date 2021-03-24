#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi ehPrimo(100005,1);

vi crivo(int n) {
    vi primos;
    ehPrimo[1] = 0;
    primos.push_back(2);
    for (int x = 3; x <= n; x=x+2) {
        ehPrimo[x-1] = 0;
        if (ehPrimo[x] == 1) {
            primos.push_back(x);
            for (int m = x+x; m <= n; m=m+x) {
                ehPrimo[m] = 0;
            }
        }
    }

    ehPrimo[2] = 1;
    return primos;
}

int main() {
    

    return 0;
}
