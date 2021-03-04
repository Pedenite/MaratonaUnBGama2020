#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ii pair<int, int>
#define mp make_pair

ii get_diag(int n) {
    int d = 1, i = 1;
    while (d < n) {
        i++;
        d += i;
    }

    return mp(i, d);
}

int main() {
    int n, num, den;
    ii d;

    while (scanf("%d", &n) != EOF) {
        d = get_diag(n);
        if (d.first%2) {
            num = 1;
            den = d.first;
        } else {
            num = d.first;
            den = 1;
        }

        while (d.second > n) {
            if (d.first%2) {
                num++;
                den--;
            } else {
                num--;
                den++;
            }

            d.second--;
        }
        
        printf("TERM %d IS %d/%d\n", n, num, den);
    }

    return 0;
}
