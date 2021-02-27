#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, t, c, qtd, tmp;
    set<int> pris;

    scanf("%d %d %d", &n, &t, &c);
    while (n--) {
        scanf("%d", &tmp);
        if (tmp > t) {
            continue;
        }

        pris.insert(tmp);
    }

    for (auto i : pris) {
        printf("%d,", i);
    }

    printf("\n");

    return 0;
}
