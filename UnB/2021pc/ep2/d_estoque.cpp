#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void printv(vi a) {
    printf("[");
    for (auto i : a) {
        printf("%d,", i);
    }
    printf("\b]\n");
}

bool busca_elemento(vi a, int elem) {
    for (auto e : a) {
        if (e == elem) {
            return true;
        }
    }

    return false;
}

int main() {
    int q, t, m;
    vi est;

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d %d", &t, &m);
        if (t == 1) {
            est.pb(m);
        } else {
            if (busca_elemento(est, m)) {
                printf("Sim\n");
            } else {
                printf("Nao\n");
            }
        }
    }

    return 0;
}
