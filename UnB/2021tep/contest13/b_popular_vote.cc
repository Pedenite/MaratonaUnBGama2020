#include <bits/stdc++.h>
using namespace std;

#define forn(j,n) for(int i = j; i < n; i++)
typedef vector<int> vi;

int main() {
    int n, m, ai, total = 0;
    vi a;

    scanf("%d %d", &n, &m);
    forn (0, n) {
        scanf("%d", &ai);
        total += ai;
        a.push_back(ai);
    }

    double coef = (1/(double)(4*m))*total;
    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; m--; i++) {
        if (a[i] < coef) {
            m++;
            break;
        }
    }

    printf("%s\n", m > 0 ? "No" : "Yes");

    return 0;
}
