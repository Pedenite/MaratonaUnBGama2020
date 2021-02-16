#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int solve(int c0, int c1, int c2) {
    int comm;
    int goal = (c0+c1+c2)/3;
    for (comm = 0; c0 != c1 || c1 != c2; comm++) {
        if (c0 == goal) {
            if (c1 > c2) {
                c1--;
                c2++;
            } else {
                c2--;
                c0++;
            }
        } else if (c1 == goal) {
            if (c2 > c0) {
                c2--;
                c0++;
            } else {
                c0--;
                c1++;
            }
        } else if (c2 == goal) {
            if (c0 > c1) {
                c0--;
                c1++;
            } else {
                c1--;
                c2++;
            }
        } else if (c0 > c1 && c0 > c2) {
            c0--;
            c1++;
        } else if (c1 > c2 && c1 > c0) {
            c1--;
            c2++;
        } else if (c2 > c0 && c2 > c1) {
            c2--;
            c0++;
        } else if (c0 == c1) {
            c1--;
            c2++;
        } else if (c1 == c2) {
            c2--;
            c0++;
        } else {
            c0--;
            c1++; 
        }
    }

    return comm;
}

int main() {
    int t, n, c0, c1, c2, temp;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        c0 = c1 = c2 = 0;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (temp%3 == 0) {
                c0++;
            } else if (temp%3 == 1) {
                c1++;
            } else {
                c2++;
            }
        }
        
        cout << solve(c0, c1, c2) << "\n";
    }

    return 0;
}
