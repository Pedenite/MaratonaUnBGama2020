#include <bits/stdc++.h>
using namespace std;

#define mod (int) (1e9+7)
#define MAX (int) (1e5+1)

int n, res;
vector<int> valores;

int tab[MAX];

int dp(int k){
	if(k == 0) {
        res++;
		return 0;
    }

	if(tab[k] != -1) {
		return tab[k];
    }

	int melhor = 1e9; 
	for(int i = 0; i < n; i++){
		if(valores[i] <= k)
			melhor = min(melhor,1 + dp(k - valores[i]));
	}

	return tab[k] = melhor;
}

int main() {
    int x, mi;

    scanf("%d %d", &n, &x);

    for (int i = 0; i < MAX; i++)
        tab[i] = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &mi);
        valores.push_back(mi);
    }

    res = 0;
    dp(x);
    printf("%d\n", res);

    return 0;
}
