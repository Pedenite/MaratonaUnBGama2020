#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, t, c, qtd = 0, tmp, res = 0;

    scanf("%d %d %d", &n, &t, &c);
    while (n--) {
        scanf("%d", &tmp);
        if (tmp > t) {
            if (qtd >= c) {
                res += qtd-c+1;
            }
            qtd = 0;
        } else {
            qtd++;
        }
    }

    if (qtd >= c) {
        res += qtd-c+1;
    }

    printf("%d\n", res);

    return 0;
}
