#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, k;
    int nova;

    cin >> n >> k;
    
    nova = (n/k);
    int time = n + nova;
    while (nova >= k) {
        nova /= k;
        if (nova % k) {
            nova = nova;
        }
        time += nova;
    }

    cout << time;

    return 0;
}
