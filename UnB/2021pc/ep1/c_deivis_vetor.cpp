#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, s, elem;

    s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        s += elem;
    }
    
    printf("%d\n", s);

    return 0;
}
