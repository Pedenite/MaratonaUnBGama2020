#include <stdio.h>

int main(){
    int a, b, c, d, e, k, ab, ac, ad, ae, bc, bd, be, cd, ce, de;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &k);
    
    ab = b - a;
    ac = c - a;
    ad = d - a;
    ae = e - a;
    bc = c - b;
    bd = d - b;
    be = e - b;
    cd = d - c;
    ce = e - c;
    de = e - d;

    if(ab > k || ac > k || ad > k || ae > k || bc > k || bd > k || be > k || cd > k || ce > k || de > k){
        printf(":(\n");
    } else {
        printf("Yay!\n");
    }
    
    return 0;
}