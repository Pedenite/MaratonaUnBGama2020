#include <iostream>
using namespace std;

int main(){
    int n;
    char str[100];
    bool res = true;

    cin >> n;
    cin >> str;

    if(n < 26){
        cout << "NO";
        return 0;
    } else {
        char NS='A', ns='a';
        bool b;
        for(int j = 0; j < 26; j++){
            for(int i = 0; i < n; i++){
                b = false;
                if(str[i] == ns || str[i] == NS){
                    b = true;
                    break;
                }
            }
            if(!b){
                res = false;
                break;
            }
            NS++;
            ns++;
        }
    }

    if(res){
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}