#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    unsigned int a, b;

    while (scanf("%u %u", &a, &b) != EOF) {
        unsigned int res = a^b;
        cout << res << "\n";
    }

    return 0;
}
