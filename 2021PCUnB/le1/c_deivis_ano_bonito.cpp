#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

bool ano_bonito(int ano) {
    vi numeros;
    while (ano > 0) {
        int digito = ano%10;
        ano /= 10;
        for (int n : numeros) {
            if (digito == n) {
                return false;
            }
        }

        numeros.pb(digito);
    }
    
    return true;
}

int main() {
    int x;

    scanf("%d", &x);
    do {
        x++;
    } while (!ano_bonito(x));

    printf("%d\n", x);

    return 0;
}
