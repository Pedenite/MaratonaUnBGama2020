#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    if(N%2 == 0){
        cout << N << "\n";
    } else {
        cout << N*2 << "\n";
    }
    
    return 0;
}