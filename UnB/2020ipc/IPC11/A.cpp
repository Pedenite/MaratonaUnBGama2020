#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n, x = 0;
    char X[4];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> X;
        if(strcmp(X,"X++") == 0 || strcmp(X, "++X") == 0){
            x++;
        } else if(strcmp(X, "--X") == 0 || strcmp(X, "X--") == 0) {
            x--;
        }
    }
    cout << x;

    return 0;
}