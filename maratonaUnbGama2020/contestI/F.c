#include <stdio.h>

int sumDigits(int x){
    int i, n = 0;
    for(i = 0; x > 0; i++){
        n += x%10;
        x /= 10;
    }
    return n;
}
int main() {
    int N, A, B;
    scanf("%d", &N);

    N = sumDigits(N);
    if(N == 1)
        N = 10;

    printf("%d\n", N);

    return 0;
}