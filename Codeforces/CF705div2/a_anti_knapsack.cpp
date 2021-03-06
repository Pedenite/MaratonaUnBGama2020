#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void print_vi(vi a) {
    cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        printf("%d", a[i]);
        if (i < a.size()-1) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    int t, n, k;
    vi a;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &k);
        a.clear();
        int lim = k%2 == 0 ? k/2 : k/2 + 1;
        for (int i = n; i >= lim; i--) {
            if (i != k) {
                a.pb(i);
            }
        }
        
        print_vi(a);
    }
    
    return 0;
}
