#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    char n;

    while (scanf("%c", &n) != EOF) {
        getchar();
        if (n >= 0x31 && n <= 0x39) {
            n -= 0x30;
        } else if (n >= 0x41 && n <= 0x5a) {
            n -= 0x41;
            n += 10;
        } else if (n >= 0x61 && n <= 0x7a) {
            n -= 0x61;
            n += 36;
        } else {
            n = 0;
            printf("such number is impossible!\n");
        }

        if (n > 0) {
            printf("%d\n", n+1);
        }
    } 

    return 0;
}
