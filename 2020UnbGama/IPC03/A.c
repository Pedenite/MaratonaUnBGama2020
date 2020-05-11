#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < 3 || a > 20 || b < 3 || b > 20){
        return -1;
    }
    if(a == b){
        printf("%d\n", a+b);
    }else{
        int x = a > b ? a+(a-1) : b+(b-1);
        printf("%d\n", x);
    }
    
    return 0;
}