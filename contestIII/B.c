#include <stdio.h>

int main(){
    int p, q, r, res;
    scanf("%d %d %d", &p, &q, &r);
    if(p < 1 || p > 100 || q < 1 || q > 100 || r < 1 || r > 100){
        return -1;
    }
    res = p + q;
    if(p+r < res)
        res = p+r;
    if(q+r < res)
        res = q+r;
    
    printf("%d", res);

    return 0;
}