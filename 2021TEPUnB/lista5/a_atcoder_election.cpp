#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    ll n, ti, ai, t_maior = 0, a_maior = 0, prop;

    cin >> n;
    while (n--) {
        cin >> ti >> ai;

        if (ti < t_maior) {
            prop = t_maior/ti;
            if (t_maior%ti) {
                prop++;
            }

            ti *= prop;
            ai *= prop;
        }

        if (ai < a_maior) {
            prop = a_maior/ai;
            if (a_maior%ai) {
                prop++;
            }

            ti *= prop;
            ai *= prop;
        }

        t_maior = max(ti, t_maior);
        a_maior = max(ai, a_maior);
        cout << "--->>> " << t_maior << " " << a_maior << endl;
    }

    cout << (t_maior+a_maior) << endl;

    return 0;
}
