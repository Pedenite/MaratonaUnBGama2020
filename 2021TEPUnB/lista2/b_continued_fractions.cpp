#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void print_res(vi a) {
    printf("[");
    for (int i = 0; i < a.size(); i++) {
        printf("%d", a[i]);
        if (i == 0) {
            printf(";");
        } else if (i == a.size()-1) {
            printf("]");
        } else {
            printf(",");
        }
    }
    printf("\n");
}

int main() {
    int n = 0, d;
    vi a;

    while (scanf("%d %d", &n, &d) != EOF) {
        a.clear();
        while (d != 1) {
            a.pb(n/d);
            int aux = n%d;
            n = d;
            d = aux;
        }

        a.pb(n);
        print_res(a);
    }

    return 0;
}
