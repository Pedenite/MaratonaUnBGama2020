#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

ll H(int n) {
    ll res = 0;

    int a = ((n*(n+1))/2);
    res = (n*n)*(n-1)/a;

    return res;
}

int main() {
    int t;

    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        long long res = H(n);
        cout << res << "\n";
    }

    return 0;
}
