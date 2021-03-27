#include <iostream>
using namespace std;

int main(){
	int n, res, temp;
	cin >> n;

	int min = int(1e9 + 1);
	bool roz = false;

	for(int i = 0; i < n; i++){
		cin >> temp;

		if(temp < min){
			res = i+1;
			min = temp;
			roz = false;
		} else if(temp == min){
			roz = true;
		}
	}

	if(roz){
		cout << "Still Rozdil";
	} else {
		cout << res;
	}
	return 0;
}
