#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, res = 0;

    scanf("%d", &x);
    res += (x/500)*1000;
    x %= 500;
    res += (x/5)*5;
    
    printf("%d\n", res);

    return 0;
}
