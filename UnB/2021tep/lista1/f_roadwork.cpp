#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, q, si, ti, xi, di, stop;
    vector<ii> st;
    vi x;

    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &si, &ti, &xi);
        st.pb(mp(max(0, si-xi), max(0, ti-xi)));
        x.pb(xi);
    }

    for (int i = 0; i < q; i++) {
        scanf("%d", &di);
        stop = -1;
        for (int j = 0; j < n; j++) {
            ii block = st[j];
            if (di >= block.first && di < block.second) {
                if (stop == -1 || x[j] < stop) {
                    stop = x[j];
                }
            }
        }

        printf("%d\n", stop);
    }

    return 0;
}
