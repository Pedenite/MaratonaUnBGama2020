#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n, temp;
    vi a;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        a.pb(temp);
    }

    sort(a.begin(), a.end());

    temp = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= temp+1) {
            temp++;
        }
    }

    printf("%d\n", temp);

    return 0;
}
