#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int x, y, z, m, n, valor;
    string s;
    vi t;

    cin >> x >> y >> z;
    cin >> m >> n;

    cin >> s;

    t.pb(m);
    int qtd = 1;
    for (auto tipo : s) {
        switch (tipo) {
        case 'F':
            valor = x;
            break;
        case 'A':
            valor = y;
            break;
        case 'R':
            valor = z;
            break;
        }

        for (int i = 0; i < t.size(); i++) {
            if (t[i] >= valor) {
                t[i] -= valor;
                // cout << "(" << qtd << ") " << i << " - " << t[i] << " -> " << valor << endl;
                // cout.flush();
                if (t[i] < min(min(x, y), z)) {
                    t.erase(t.begin()+i);
                    if (t.empty()) {
                        t.pb(m);
                        qtd++;
                    }
                }

                break;
            }

            if (i == t.size()-1) {
                t.pb(m);
                qtd++;
            }
        }
    }

    if (t[0] == m) {
        qtd--;
    }

    printf("%d\n", qtd);

    return 0;
}
