#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void print_stack(stack<ii> a) {
    while (!a.empty()) {
        printf("%d %d | ", a.top().first, a.top().second);
        a.pop();
    }
    printf("\n");
}

int main() {
    int n, k, c, s;
    vector<ii> a;
    stack<ii> est;
    bool res = true;

    scanf("%d %d", &n, &k);
    while (n--) {
        scanf("%d %d", &c, &s);
        a.pb(mp(c, s));
    }

    sort(a.begin(), a.end());

    for (auto e : a) {
        while (!est.empty() && est.top().second <= e.first) {
            est.pop();
        }

        if (est.empty() || est.top().second > e.second) {
            est.push(e);
        } else {
            res = false;
            break;
        }

        if (est.size() > k) {
            res = false;
            break;
        }
    }

    printf("%s\n", res ? "Sim" : "Nao");

    return 0;
}
