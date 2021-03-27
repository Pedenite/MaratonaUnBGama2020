#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int get_xor(int a, int b) {
    int res = 0;
    for (int i = 1; a != 0 && b != 0; i<<=1) {
        if (a&1 == 1 && b&1 == 1) {
            res |= i;
        }
        a >>= 1;
        b >>= 1;
    }

    return res;
}

int main() {
    int t, a, b, x, res;

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        x = get_xor(a, b);
        res = (a^x) + (b^x);
        printf("%d\n", res);
    }

    return 0;
}
