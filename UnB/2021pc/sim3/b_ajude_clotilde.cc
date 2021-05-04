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
    int o, d, k, ci;
    vi c;

    scanf("%d %d %d", &o, &d, &k);
    while (k--) {
        scanf("%d", &ci);
        c.push_back(ci);
    }
    
    sort(c.begin(), c.end());
    

    return 0;
}
