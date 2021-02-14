#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int a, b, x, y, tamx, tamy;

    cin >> a >> b >> x >> y;

    if (x > (a-1)/2) {
        tamx = x+1;
    } else {
        tamx = a-x;
    }

    if (y > (b-1)/2) {
        tamy = y+1;
    } else {
        tamy = b-y;
    }

    printf("%d\n", tamx);
    printf("%d\n", tamy);
    cout << tamx*tamy << '\n';

    return 0;
}