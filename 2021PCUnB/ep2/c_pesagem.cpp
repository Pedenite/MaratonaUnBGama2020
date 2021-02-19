#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, f, p, peso, t;
    vi acima;

    t = 0;
    scanf("%d %d %d", &n, &f, &p);
    for (int i = 0; i < n + acima.size(); i++) {
        if (i < n) {
            scanf("%d", &peso);
        } else {
            peso = acima[i-n];
        }

        if (i%f == 0) {
            if (peso > p) {
                t += 10;
                acima.pb(peso-2);
            } else {
                t += 5;
            }
        } else {
            t++;
        }
    }

    printf("%d\n", t);

    return 0;
}
