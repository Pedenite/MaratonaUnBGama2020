#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, res;

    scanf("%d", &n);
    if (n == 0) {
        printf("1\n");
        return 0;
    }

    switch (n%4) {
        case 0: res = 6;
        break;
        case 1: res = 8;
        break;
        case 2: res = 4;
        break;
        case 3: res = 2;
    }
    
    printf("%d\n", res);

    return 0;
}
