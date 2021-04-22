#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define mp make_pair
#define ii pair<int,int>
#define MAX (int) (1e5+1)
#define oo 0x7fffffff

int d[MAX];
vector<vi> g(MAX);

void dijkstra_weightless(int start, int n){
	for(int u = 1; u <= n; u++)
		d[u] = oo;

	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;

	d[start] = 0;
	pq.push(mp(d[start], start));

	ll dt;
	int u, v;
	while(!pq.empty()){
		tie(dt, u) = pq.top();
        pq.pop();
		if(dt > d[u])
            continue;

		for(auto edge : g[u]){
			v = edge;

			if(d[v] > d[u] + 1){
				d[v] = d[u] + 1;
				pq.push(mp(d[v], v));
			}
		}
	}
}

int main() {
    int n, m, k, q, a, b, x;

    scanf("%d %d %d %d", &n, &m, &k, &q);
    while (m--) {
        scanf("%d %d", &a, &b);
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dijkstra_weightless(k, n);
    while (q--) {
        scanf("%d", &x);
        if (d[x] == oo) {
            printf("infinito\n");
        } else {
            printf("%d\n", d[x]);
        }
    }

    return 0;
}
