#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int a, n;

    scanf("%d %d", &n, &a);
    n %= 500;
    if (a >= n) {
        printf("Sim\n");
    } else {
        printf("Nao");
    }

    return 0;
}
