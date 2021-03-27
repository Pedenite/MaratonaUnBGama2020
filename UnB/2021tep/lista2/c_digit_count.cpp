#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void print_v(vi a) {
    bool inicio = true;
    for (auto ai : a) {
        if (!inicio) {
            printf(" ");
        } else {
            inicio = false;
        }
        printf("%d", ai);
    }

    printf("\n");
}

int main() {
    int t, n;
    vi d;
    string s;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        s = "";
        d = {0,0,0,0,0,0,0,0,0,0};
        for (int j = 1; j <= n; j++) {
            s += to_string(j);
        }

        for (int k = 0; k < 10; k++) {
            for (auto c : s) {
                if (((int) (c - '0')) == k) {
                    d[k]++;
                }
            }
        }

        print_v(d);
    }

    return 0;
}
