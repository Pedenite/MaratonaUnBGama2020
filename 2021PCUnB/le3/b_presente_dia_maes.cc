#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, m, c, sum = 0, maior = 0;
    vi v;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> c;
        v.pb(c);
        sum += c;
        if (c > maior) {
            maior = c;
        }
    }

    int ideal = min(sum/m, maior);

    sort(v.begin(), v.end());
    while (ideal > 0) {
        int abastecidas = 0;
        int pos = (lower_bound(v.begin(), v.end(), ideal)-v.begin());
        for (int i = pos; i < v.size(); i++) {
            abastecidas += v[i]/ideal;
            if (abastecidas >= m) {
                break;
            }
        }

        if (abastecidas >= m) {
            break;
        }

        ideal--;
    }

    cout << ideal << endl;

    return 0;
}
