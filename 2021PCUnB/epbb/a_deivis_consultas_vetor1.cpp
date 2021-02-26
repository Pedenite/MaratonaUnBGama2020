#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int busca_maior(vi a, int elem) {
    int pl = 0;
    int pr = a.size()-1;
    if (elem > a[pr]) {
        return -1;
    }

    int mid;
    while (pl <= pr) {
        mid = (pl+pr)/2;
        if (elem == a[mid]) {
            return elem;
        } else if (elem > a[mid]) {
            pl = mid + 1;
        } else {
            pr = mid - 1;
        }
    }

    if (elem < a[mid]) {
        return a[mid];
    } else {
        return a[mid+1];
    }
}

int main() {
    int n, q, tmp;
    vi a;

    cin >> n >> q;
    while (n--) {
        cin >> tmp;
        a.pb(tmp);
    }

    sort(a.begin(), a.end());

    while (q--) {
        cin >> tmp;
        printf("%d\n", busca_maior(a, tmp));
    }

    return 0;
}
