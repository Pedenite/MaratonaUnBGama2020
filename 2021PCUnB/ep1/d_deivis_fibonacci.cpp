#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int fib(int x) {
    if (x == 0 || x == 1) {
        return x;
    }

    return fib(x-1) + fib(x-2);
}

int main() {
    int n;

    cin >> n;
    cout << fib(n) << "\n";

    return 0;
}
