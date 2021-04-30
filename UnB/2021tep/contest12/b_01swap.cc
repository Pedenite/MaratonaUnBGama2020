#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef vector<int> vi;

int main() {
    int n, pi, pos;
    vi p;
    bool sorted = true;
    pos = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pi);
        p.pb(pi);
        if (pi != i+1) {
            pos = i;
        }
    }

    if (p[pos] != pos+1) {
        int temp = p[pos];
        p[pos] = p[temp-1];
        p[temp-1] = temp;
    }

    for (int i = 1; i < n; i++) {
        if (p[i] < p[i-1]) {
            sorted = false;
            break;
        }
    }

    printf("%s\n", sorted ? "YES" : "NO");

    return 0;
}
