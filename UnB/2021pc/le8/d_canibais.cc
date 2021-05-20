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

vector<int> e, c;
int tab[10001][10001];

int solve(int n, int m){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            tab[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(c[i] <= j){
                tab[i][j] = max(tab[i-1][j-c[i]]+e[i],tab[i-1][j]);
            }else{
                tab[i][j] = tab[i-1][j];
            }
        }
    }
    return tab[n][m];
}

int main() {
    int n, m, ei, ci;

    scanf("%d %d", &n, &m);
    e.push_back(0);
    c.push_back(0);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &ei);
        e.push_back(ei);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &ci);
        c.push_back(ci);
    }

    printf("%d\n", solve(n, m));

    return 0;
}
