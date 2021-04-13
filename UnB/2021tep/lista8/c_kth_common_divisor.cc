#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int kth_divisor(int n, int k){
    vi divs;
    int b;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            b = n/i;
            divs.pb(i);
            if(i != b)
                divs.pb(b);
        }
    }
    
    sort(divs.begin(), divs.end(), greater<int>());

    return divs[k-1];
}

int main() {
    int a, b, k;

    scanf("%d %d %d", &a, &b, &k);
    printf("%d\n", kth_divisor(gcd(a, b), k));

    return 0;
}
