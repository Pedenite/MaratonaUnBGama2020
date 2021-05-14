#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define MAX (int) (1e5+1)
#define mod (int) (1e9+7)
#define forn(j,n) for(int i = j; i < n; i++)
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> ii;

int main() {
    int b, n, ri, q, ai;
    vector<int> r, a;

    scanf("%d %d", &b, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ri);
        r.push_back(ri);
    }

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &ai);
        a.push_back(ai);
    }

    return 0;
}
