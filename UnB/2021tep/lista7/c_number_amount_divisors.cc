#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define MAX (ll) (1E18+5) // compilation error and TLE...

int divs[MAX];

void compute_divs() {
    divs[0] = 0;
    for(int x = 1; x < MAX; x++) {
        for(int m = x; m < MAX; m += x) {
            divs[m]++;
        }
    }
}

int main() {
    int n;

    compute_divs();

    return 0;
}
