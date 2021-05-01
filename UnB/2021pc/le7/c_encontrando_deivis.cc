#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (1e5+1)
#define oo 0x7fffffff
typedef vector<vector<pair<int, int>>> grafo;

int d[MAX];
grafo g(MAX);

void dijkstra(int start, int n){
	for(int u = 1; u <= n; u++)
		d[u] = oo;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	d[start] = 0;
	pq.push(make_pair(d[start], start));

	int dt, w;
	int u, v;
	while(!pq.empty()){
		tie(dt, u) = pq.top();
        pq.pop();
		if(dt > d[u])
            continue;

		for(auto edge : g[u]){
			tie(v, w) = edge;

			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				pq.push(make_pair(d[v], v));
			}
		}
	}
}

int main() {
    int n, c;
    char ot, ub, x, y;

    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        scanf("%c %c %c %c %d", &ot, &ub, &x, &y, &c);
        
    }

    return 0;
}
