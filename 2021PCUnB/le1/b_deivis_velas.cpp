#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, k;
    int time = 0;

    cin >> n >> k;
    
    while (n > 0) {
        time++;
        if (time%k == 0) {
            n++;
        }
        n--;
    }

    cout << time << "\n";

    return 0;
}
