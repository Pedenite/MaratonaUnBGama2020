#include <bits/stdc++.h>
using namespace std;

int euclides(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {
    int p, qtd = 1;

    cin >> p;
    for (int i = 2; i < p-1; i++) {
        if (euclides(i, p-1) == 1) {
            qtd++;
        }
    }

    cout << qtd << endl;
    
    return 0;
}
