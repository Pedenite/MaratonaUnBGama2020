#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, ti, ai, t_maior = -1, a_maior = -1, prop;

    cin >> n;
    while (n--) {
        cin >> ti >> ai;
        if (t_maior < 0 || a_maior < 0) {
            t_maior = ti;
            a_maior = ai;
        }

        prop = max(t_maior/ti, a_maior/ai);
        if (t_maior > ti*prop || a_maior > ai*prop) {
            prop++;
        }

        t_maior = ti*prop;
        a_maior = ai*prop;
    }

    cout << (t_maior+a_maior) << endl;

    return 0;
}
