#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    char str[(int)1e5 + 1];
    cin >> n;
    cin >> str;

    int z, e, r, o, ns;
    z = e = r = o = ns = 0;
    for(int i = 0; i < n; i++){
        switch(str[i]){
            case('z'):
                z++;
                break;
            case('e'):
                e++;
                break;
            case('r'):
                r++;
                break;
            case('o'):
                o++;
                break;
            case('n'):
                ns++;
                break;
            default:
                break;
        }
    }

    while(true){
        if(o != 0 && ns != 0 && e != 0) {
            cout << 1 << " ";
            o--;
            ns--;
            e--;
        } else if(z != 0 && e != 0 && r != 0 && o != 0) {
            cout << 0 << " ";
            z--;
            e--;
            r--;
            o--;
        } else {
            break;
        }
    }

    return 0;
}