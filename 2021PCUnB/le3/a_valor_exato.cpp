#include <bits/stdc++.h>
// #include <unistd.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void print_vi(vi a) {
    for (auto e : a) {
        cout << e << ' ';
    }

    cout << endl;
}

int main() {
    int n, m, pi, x, y;
    vi p;

    cin >> n >> m;
    while (n--) {
        cin >> pi;
        p.pb(pi);
    }

    sort (p.begin(), p.end());

    int index = lower_bound(p.begin(), p.end(), m/2)-p.begin();

    if (index < p.size()-1 && (abs(p[index]+p[index+1] - m) <= abs(p[index]+p[index-1] - m))) {
        x = p[index];
        y = p[index+1];
    } else {
        x = p[index-1];
        y = p[index];
    }

    // cout << index << endl;
    // print_vi(p);

    int i = 0;
    while (x+y != m) {
        // cout << (x+y) << endl;
        // cout.flush();
        // usleep(1000000);
        if (x+y < m) {
            i++;
            y = p[index+i+1];
        } else {
            i--;
            x = p[index+i];
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}
