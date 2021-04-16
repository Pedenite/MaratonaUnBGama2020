#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string &s) {
    string rev = s;
    reverse(rev.begin(), rev.end());

    return rev == s;
}

int main() {
    string s;

    cin >> s;
    int n = s.size();

    string p1, p2;
    for (int i = 0; i < n/2; i++) {
        p1 += s[i];
    }

    for ( int i = (n+1)/2; i < n; i++) {
        p2 += s[i];
    }

    if (is_palindrome(s) && is_palindrome(p1) && is_palindrome(p2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
