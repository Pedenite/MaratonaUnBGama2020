#include <bits/stdc++.h>
 
using namespace std;
 
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
 
int main() {
    int livrosQnt, perguntasQnt;
    vector<string> livros;
    vector<string> perguntas;
 
    scanf("%i %i", &livrosQnt, &perguntasQnt);
 
    for (int i = 0; i < livrosQnt; ++i) {
        string aux;
        cin >> aux;
 
        livros.pb(aux);
    }
 
    for (int i = 0; i < perguntasQnt; ++i) {
        string aux;
        cin >> aux;
 
        perguntas.pb(aux);
    }
 
    vector<int> result;
    for (int i = 0; i < perguntasQnt; ++i) {
        int primeiroIndex = -1;
 
        for (int j = 0; j < livrosQnt; ++j) { //TLE
            if (perguntas[i] == livros[j]) {
                primeiroIndex = j + 1;
                break;
            }
        }
 
        printf("%i\n", primeiroIndex);
    }
}