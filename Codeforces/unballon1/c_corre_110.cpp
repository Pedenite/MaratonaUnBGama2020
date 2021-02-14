#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int b, f, p, t;

    scanf("%d %d %d %d", &b, &f, &p, &t);
    
    int pessoasEntraFila = p*t;
    int vagas = 50-b;

    if(b >= vagas || vagas <= f || (pessoasEntraFila + f) >= vagas){
        printf("Cara, desiste\n");
    }else{
        printf("CORRE ALBERTO!\n");
    }

    return 0;
}