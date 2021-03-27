#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

ll derivada(vll nums, ll x) {
	ll res = 0;
	for (int i = 0; i < nums.size(); i++) {
		ll a = nums[i];
		res += a*(i+1)*(pow(x,i));
	}

	return res;
}

int main() {
	ll x, ai, res;
	vll a;
    while (cin >> x) {
        string s;
        getline(cin, s);
        getline(cin, s);
        stringstream sin;
        sin << s;
		a.clear();
        while (sin >> ai) {
            a.pb(ai);
		}

		a.pop_back();
        cout << derivada(a, x) << endl;
    }

    return 0;
}
