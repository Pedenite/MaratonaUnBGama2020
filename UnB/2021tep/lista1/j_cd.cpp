#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, m, tmp, res;

    while (1) {
        res = 0;
        vi jack;
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) {
            break;
        }

        while (n--) {
            scanf("%d", &tmp);
            jack.pb(tmp);
        }

        while (m--) {
            scanf("%d", &tmp);
            if (binary_search(jack.begin(), jack.end(), tmp)) {
                res++;
            }
        }

        printf("%d\n", res);
    }
    
    return 0;
}
