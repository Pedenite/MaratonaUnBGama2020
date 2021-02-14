#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, x, y;

    string temp;
    vector<string> mapa;

    vector<ii> caminhos;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mapa.pb(temp);
    }

    x = y = 0;
    while (true) {
        bool passou = false;
        int instruction;

        mapa[x][y] = '#';
        if (x < n-1 && mapa[x+1][y] == '.') {
            instruction = 0;
            passou = true;
        } 
        if (y < n-1 && mapa[x][y+1] == '.') {
            if (passou) {
                caminhos.pb(mp(x, y+1));
            } else {
                instruction = 1;
            }
            passou = true;
        }
        if (x > 0 && mapa[x-1][y] == '.') {
            if (passou) {
                caminhos.pb(mp(x-1, y));
            } else {
                instruction = 2;
            }
            passou = true;
        }
        if (y > 0 && mapa[x][y-1] == '.') {
            if (passou) {
                caminhos.pb(mp(x, y-1));
            } else {
                instruction = 3;
            }
            passou = true;
        }

        switch(instruction) {
            case 0: x++;
            break;
            case 1: y++;
            break;
            case 2: x--;
            break;
            case 3: y--;
        }

        cout << "\n\n";
        for (int i = 0; i < n; i++) {
            cout << mapa[i] << '\n';
        }

        if (x == n-1 && y == n-1) {
            break;
        }

        if (!passou && caminhos.size() > 0) {
            ii ponto = caminhos.back();
            x = ponto.first;
            y = ponto.second;
            caminhos.pop_back();
        } else if (!passou) {
            break;
        }
    }

    if (x == n-1 && y == n-1) {
        cout << "Sim\n";
    } else {
        cout << "Nao\n";
    }

    return 0;
}
