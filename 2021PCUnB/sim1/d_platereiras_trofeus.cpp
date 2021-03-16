#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, q, xi, yi;
    vi trofeus;

    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> xi >> yi;
        for (int i = xi; i <= yi; i++) {
            trofeus.pb(i);
        }
    }

    sort(trofeus.begin(), trofeus.end());
    int index = lower_bound(trofeus.begin(), trofeus.end(), q)-trofeus.begin();

    if (index >= trofeus.size() || trofeus[index] != q) {
        printf("-1");
    } else {
        printf("%d ", index);
        while (index < trofeus.size() && trofeus[index] == q) {
            index++;
        }

        if (trofeus[index] != q) {
            index--;
        }

        printf("%d", index);
    }

    cout << endl;

    return 0;
}
