#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX (int) (1E6+5)

int isComposite[MAX];

void composites() {
    for (int x = 2; x <= MAX; x+=2) {
        if (isComposite[x]) {
            continue;
        }

        for (int m = x+x; m <= MAX; m+=x) {
            isComposite[m] = 1;
        }

        if (x == 2) {
            x--;
        }
    }
}

int main() {
    int n, a, b;

    composites();
    scanf("%d", &n);
    a = b = n/2;
    if (n&1) {
        b++;
    }
    
    while (!isComposite[a] || !isComposite[b]) {
        a--;
        b++;
    }

    printf("%d %d\n", a, b);

    return 0;
}
