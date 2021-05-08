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

void solve(int b[3][3]) {

}

int main() {
    int b[3][3], i = 0, j = 0;

    while (scanf("%d", &b[i][j]) != EOF) {
        j++;
        if (j == 3) {
            j = 0;
            i++;
        }

        if (i == 3) {
            i = 0;
            solve(b);
        }
    }

    return 0;
}
