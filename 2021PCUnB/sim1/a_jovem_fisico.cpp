#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, xi, yi, zi, x, y, z;
    x = y = z = 0;

    cin >> n;
    while (n--) {
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }

    if (x == 0 && y == 0 && z == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
