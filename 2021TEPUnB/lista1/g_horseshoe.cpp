#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    ll temp;
    int res = 0;
    vector<ll> s;

    for (int i = 0; i < 4; i++) {
        scanf("%lld", &temp);
        for (auto si : s) {
            if (temp == si) {
                res++;
                break;
            }
        }

        s.pb(temp);
    }

    printf("%d\n", res);

    return 0;
}
