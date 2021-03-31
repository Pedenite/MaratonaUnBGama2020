#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define MAX (int) (1e5+1)

int have_ovo[MAX];

vi divisores(int n){
    vi divs;
    int b;
    
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            b = n/i;
            divs.push_back(i);
            if(i != b)
                divs.push_back(b);
        }
    }
    
    sort(divs.begin(),divs.end());
    
    return divs;
}

int main() {
    int n, m, x, y;

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d %d", &x, &y);
        
    }

    return 0;
}
