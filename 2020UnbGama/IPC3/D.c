#include <stdio.h>

void better(){
    int X[5], x[5], i, last = 0;
    int S = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &X[i]);
        x[i] = X[i]%10;
        if(i == 0) continue;
        last = (x[i] < x[last] || x[last] == 0) && x[i] != 0? i : last;
    }
    //printf("%d\n", last);
    if(last == 4) goto aftSwap;

    int temp = X[4];
    X[4] = X[last];
    X[last] = temp;

    temp = x[4];
    x[4] = x[last];
    x[last] = temp;
    
    aftSwap:
    for(i = 0; i < 4; i++){
        S = x[i] != 0? S+X[i]+10-x[i] : S+X[i];
    }
    S += X[4];
    printf("%d\n", S);
}

int main(){
    better();
    return 0;

    // Code working below, but unpractical... It was remade above
    int A, B, C, D, E, a, b, c, d, e, last;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%d", &E);

    a = A%10;
    last = a == 0? 0 : 10-a;
    b = B%10;
    if(10-b > last && b != 0){
        last = 10-b;
    }
    c = C%10;
    if(10-c > last && c != 0){
        last = 10-c;
    }
    d = D%10;
    if(10-d > last && d != 0){
        last = 10-d;
    }
    e = E%10;
    if(10-e > last && e != 0){
        last = 10-e;
    }
    A = a==0? A : A+10-a;
    B = b==0? B : B+10-b;
    C = c==0? C : C+10-c;
    D = d==0? D : D+10-d;
    E = e==0? E : E+10-e;

    printf("%d", A+B+C+D+E-last);
    
    return 0;
}