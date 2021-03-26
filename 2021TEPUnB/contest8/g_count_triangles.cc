#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int a, b, c, d, x, y, z;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    x = b-a+1;
    y = c-b+1;
    z = d-c+1;

    if (x - y+z) {
        // :(
    }

    printf("%d\n", x*y*z);

    return 0;
}
