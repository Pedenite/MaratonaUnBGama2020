#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

bool sort_second(ii &a, ii &b) {
    return (a.second < b.second);
}

void printvii(vector<ii> a) {
    for (auto elem : a) {
        printf("(%d,%d)\n", elem.first, elem.second);
    }
}

int main() {
    int n, s, f, res = 0;
    vector<ii> cam;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s, &f);
        cam.pb(mp(s, f));
    }

    sort(cam.begin(), cam.end(), sort_second);
    
    s = 0;
    f = 0;
    for (auto elem : cam) {
        if (s == elem.first) {
            if (elem.second < f) {
                f = elem.second;
            }
        } else if (elem.first > f) {
            res++;
            s = elem.first;
            f = elem.second;
        }
    }
    
    printf("%d\n", res);

    return 0;
}
