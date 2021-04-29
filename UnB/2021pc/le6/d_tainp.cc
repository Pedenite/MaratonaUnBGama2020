#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
typedef vector<string> vs;

vs pixels;
int n, m;

void preenche(int x, int y) {
    vector<pair<int, int>> caminhos;
    while (true) {
        bool passou = false;
        int instruction;

        pixels[x][y] = '#';
        if (x < n-1 && pixels[x+1][y] == '.') {
            instruction = 0;
            passou = true;
        } 
        if (y < m-1 && pixels[x][y+1] == '.') {
            if (passou) {
                caminhos.pb(mp(x, y+1));
            } else {
                instruction = 1;
            }
            passou = true;
        }
        if (x > 0 && pixels[x-1][y] == '.') {
            if (passou) {
                caminhos.pb(mp(x-1, y));
            } else {
                instruction = 2;
            }
            passou = true;
        }
        if (y > 0 && pixels[x][y-1] == '.') {
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

        if (!passou && caminhos.size() > 0) {
            pair<int, int> ponto = caminhos.back();
            x = ponto.first;
            y = ponto.second;
            caminhos.pop_back();
        } else if (!passou) {
            break;
        }
    }
}

int main() {
    int res = 0;
    string s;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        cin >> s;
        pixels.pb(s);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (pixels[i][j] == '.') {
                res++;
                preenche(i, j);
                // cout << "\n\n";
                // for (int i = 0; i < n; i++) {
                //     cout << pixels[i] << '\n';
                // }
            }
        }
    }

    printf("%d\n", res);

    return 0;
}
