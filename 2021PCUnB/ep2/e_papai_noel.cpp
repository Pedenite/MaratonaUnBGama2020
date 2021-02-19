#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int maior_peso(vi a) {
    int maior = 0;
    for (auto e : a) {
        if (e > maior) {
            maior = e;
        }
    }

    return maior;
}

int main() {
    int n, x;
    char c;
    vi saco;
    int maior = 0, pos = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        getchar();
        scanf("%c %d", &c, &x);
        switch (c) {
        case 'A':
            if (x > maior) {
                maior = x;
                pos = 0;
            } else {
                pos++;
            }
            
            saco.pb(x);
            break;
        case 'R':
            saco.pop_back();
            pos--;
            if (pos <= 0) {
                maior = maior_peso(saco);
            }
            break;
        case 'V':
            printf("%d\n", maior);
            break;
        }
    }

    return 0;
}
