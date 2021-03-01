#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

bool check(string a, string b) {
    int pos = 0;
    for (int i = 0; i < b.size(); i++) {
        bool found = false;
        for (int j = 0+pos; j < a.size(); j++) {
            if (b[i] == a[j]) {
                found = true;
                pos = j+1;
                break;
            }
        }

        if (!found) {
            return false;
        }
    }

    return true;
}

int main() {
    string t, p;
    int ai, i;

    cin >> t >> p;
    for (i = 0; i < t.size(); i++) {
        cin >> ai;
        t.replace(ai-1, 1, "#");
        // cout << t << '\n';
        if (!check(t, p)) {
            break;
        }
    }

    printf("%d\n", i);
    
    return 0;
}
