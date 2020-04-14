#include <stdio.h>

int main(){
    int X;
    scanf("%d", &X);

    switch(X){
        case 7:
            printf("YES\n");
            break;
        case 5:
            printf("YES\n");
            break;
        case 3:
            printf("YES\n");
            break;
        default:
            printf("NO\n");
            break;
    }
    
    return 0;
}