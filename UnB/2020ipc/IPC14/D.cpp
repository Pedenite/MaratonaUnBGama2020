#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n, j, l, r, ml, mr, len = 0;
    l = ml = int(1e9 +1);
    r = mr = 0;
    cin >> n;

    if(n == 1){
        cout << 1;
        return 0;
    }

    for(int i = 1; i <= n; i++){
        int l1, r1;
        cin >> l1 >> r1;
        if(l1 < l){
            l = l1;
        }
        if(r1 > r){
            r = r1;
        }
        if(abs(r1 - l1) > len){
            ml = l1;
            mr = r1;
            j = i;
            len = abs(r1 - l1);
        }
    }

    if(ml <= l && mr >= r){
        cout << j;
    } else {
        cout << -1;
    }

    return 0;
}