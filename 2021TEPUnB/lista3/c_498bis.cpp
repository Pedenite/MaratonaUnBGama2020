#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

vll split(string s) {
	string tmp;
	vll res;
	for (auto c : s) {
		if (c == ' ' || c == '\n' || c == EOF) {
			res.pb(stoi(tmp));
			tmp = "";
		} else {
			tmp += c;
		}
	}

	if (tmp != "") {
		res.pb(stoi(tmp));
	}

	return res;
}

void print_vector(vll a) {
	for (auto e : a) {
		cout << e << ' ';
	}

	cout << '\n';
}

ll derivada(vll nums, ll x) {
	ll res = 0;
	for (int i = 0; i < nums.size(); i++) {
		ll a = nums[i];
		res += a*(i+1)*(pow(x,i));
	}

	return res;
}

int main() {
	ll x;
	string as;
	
    while (scanf("%lld", &x) != EOF) {
		as = "";
		cin.ignore();
		getline(cin, as);

		vll a = split(as);
		a.pop_back();
		cout << derivada(a, x) << endl;
	}

    return 0;
}
