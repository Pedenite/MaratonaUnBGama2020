#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

bool palindromo(string s) {
    int qtd = 1;
    int impares = 0;
    for (int i = 1; i <= s.size(); i++) {
        if (s[i] != s[i-1]) {
            if (qtd&1 == 1) {
                impares++;
            }

            qtd = 0;
        }

        if (impares > 1) {
            return false;
        }

        qtd++;
    }

    return true;
}

int main() {
    string s;

    cin >> s;
    sort(s.begin(), s.end());

    if (palindromo(s)) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    return 0;
}
