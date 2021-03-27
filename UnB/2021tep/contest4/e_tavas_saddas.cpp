#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, res = 0;

    scanf("%d", &n);
    for (int i = 1; n > 0; i<<=1) {
        int index;
        if (n%10 == 4) {
            index = 1;
        } else {
            index = 2;
        }
        res += index * i;
        n /= 10;
    }

    printf("%d\n", res);

    return 0;
}
