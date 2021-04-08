#include <bits/stdc++.h>
using namespace std;

int sum_divs(int n){
    int divs = 0;
    int b;
    
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            b = n/i;
            divs += i;
            if(i != b)
                divs += b;
        }
    }
    
    return divs;
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", sum_divs(n)/2 == n ? 1 : 0);

    return 0;
}
