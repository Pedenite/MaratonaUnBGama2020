#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, temp, soma, maior;

    soma = maior = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > maior) {
            soma += (temp-maior)*i;
            maior = temp;
        }

        soma += maior-temp;
    }

    cout << soma;

    return 0;
}
