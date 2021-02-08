#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, x = 0;

    cin >> n;
    while (n > 0) {
        if (n%100 == 0) {
            n -= 100;
        } else if (n%20 == 0) {
            n -= 20;
        } else if (n%10 == 0) {
            n -= 10;
        } else if (n%5 == 0) {
            n -= 5;
        } else {
            n -= 1;
        }
        x++;
    }

    cout << x << "\n";

    return 0;
}
