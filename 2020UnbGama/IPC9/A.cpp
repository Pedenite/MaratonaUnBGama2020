#include <iostream>
using namespace std;

int main(){
	char S[5];

	cin >> S;
	char first = S[0];
	char second = '\0';
	int f = 1, s = 0;
	
	for(int i = 1; i < 4; i++){
		if(S[i] == first) {
			f++;
		} else if (S[i] == second || second == '\0'){
			if(second == '\0'){
				second = S[i];
			}
			s++;
		}
	}
	if(f == 2 && s == 2){
		cout << "Yes";
	} else {
		cout << "No";
	}
	
	return 0;
}