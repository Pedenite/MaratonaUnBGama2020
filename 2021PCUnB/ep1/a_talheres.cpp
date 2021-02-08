#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, g, f, c;

    cin >> n >> g >> f >> c;
    printf("%d\n", min(min(g, f) + c, n));

    return 0;
}
