#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

vi matricular(vector<string> a) {
    vi res;
    for (auto elem : a) {
        int aux = 0;
        for (auto elem1 : a) {
            if (elem > elem1) {
                aux++;
            }
        }

        res.pb(aux);
    }

    return res;
}

int main() {
    int n;
    string nome;
    vector<string> amigos;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> nome;
        amigos.pb(nome);
    }

    vi res = matricular(amigos);
    for (int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}
