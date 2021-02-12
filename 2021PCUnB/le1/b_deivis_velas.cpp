#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, k;
    float nova, piece = 0.0;

    cin >> n >> k;
    
    nova = (n/k);
    int res = n + nova;
    while (nova >= k) {
        nova /= k;
        if ((int) nova % k) {
            piece += nova - (int) nova;
            nova = (int) nova;
        }
        res += nova;

        if (piece >= k) {
            res++;
        }
    }

    cout << res;

    return 0;
}
