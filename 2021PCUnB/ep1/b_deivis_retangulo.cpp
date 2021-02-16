#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, m, minx, miny, maxx, maxy;
    string aux;
    bool found = false;

    minx = miny = 0x7fffffff;
    maxx = maxy = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        for (int j = 0; j < m; j++) {
            if ((int) aux[j] == 0x31) {
                found = true;
                minx = min(minx, i);
                miny = min(miny, j);
                maxx = max(maxx, i);
                maxy = max(maxy, j);
            }
        }
    }

    if (found) {
        printf("%dx%d\n", maxy-miny+1, maxx-minx+1);
    } else {
        printf("0x0\n");
    }

    return 0;
}
