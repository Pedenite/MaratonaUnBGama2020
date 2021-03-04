#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, r, m, tmp, anos = 0;
    vi t;

    cin >> n >> r >> m;
    while (n--) {
        cin >> tmp;
        t.pb(tmp);
    }

    while (r > 0) {
        for (int i = 0; i < t.size(); i++) {
            if (anos%t[i] == 0) {
                r -= m;
            }
        }

        anos++;
        r++;
    }

    printf("%d\n", anos);

    return 0;
}
