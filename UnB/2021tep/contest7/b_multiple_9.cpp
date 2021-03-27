#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    string n;
    ll sum = 0;

    cin >> n;
    for (auto dig : n) {
        sum += dig - '0';
    }

    printf("%s\n", sum%9 ? "No" : "Yes");

    return 0;
}
