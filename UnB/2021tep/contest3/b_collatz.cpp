#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int f(int n) {
    if (n%2 == 0) {
        return n/2;
    } else {
        return 3*n +1;
    }
}

int main() {
    int s, m, achou;
    vi a;

    scanf("%d", &s);
    a.pb(s);

    achou = 0;
    
    for (int i = 0; i < 1000000; i++) {
        m = f(a[i]);
        for (auto elem : a) {
            if (elem == m) {
                achou = i+2;
                break;
            }
        }

        if (achou) {
            break;
        }

        a.pb(m);
    }

    printf("%d\n", achou);

    return 0;
}
