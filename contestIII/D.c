#include <stdio.h>

int main(){
    int A, B, C, D, E, a, b, c, d, e, last;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%d", &E);

    a = A%10;
    last = a == 0? 10 : 10-a;
    b = B%10;
    if(b > last && b != 0){
        last = 10-b;
    }
    c = C%10;
    if(c > last && c != 0){
        last = 10-c;
    }
    d = D%10;
    if(d > last && d != 0){
        last = 10-d;
    }
    e = E%10;
    if(e > last && e != 0){
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