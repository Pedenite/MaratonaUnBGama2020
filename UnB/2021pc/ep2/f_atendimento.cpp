#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, m, temp, res = 0;
    vi v, c, tempo;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        v.pb(temp);
        tempo.pb(0);
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &temp);
        c.pb(temp);
        int menor = 0;
        for (int j = 0; j < n; j++) {
            if (tempo[j] < tempo[menor]) {
                menor = j;
            }

            if (tempo[menor] == 0) {
                break;
            }
        }

        tempo[menor] += v[menor]*c[i];
    }

    cout << *max_element(tempo.begin(), tempo.end()) << '\n';

    return 0;
}
