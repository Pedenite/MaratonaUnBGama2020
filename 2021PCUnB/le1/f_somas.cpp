#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, a, b, soma = 0, aux, digits;

    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        digits = 0;
        aux = i;
        while (aux > 0) {
            digits += aux%10;
            aux /= 10;
        }

        if (digits >= a && digits <= b) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
