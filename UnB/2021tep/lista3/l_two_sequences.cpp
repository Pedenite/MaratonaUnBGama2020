#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, tmp;
    vi a, b;

    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        a.pb(tmp);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        b.pb(tmp);
    }

    return 0;
}
