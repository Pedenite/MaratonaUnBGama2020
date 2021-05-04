#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (1e5+1)
#define oo 0x7fffffff
typedef vector<vector<pair<int, int>>> grafo;

int d[MAX];
int n;
grafo g(MAX);

void dijkstra(int start){
	for(int u = 0; u < n; u++)
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
    int c, a, b, di, maior = 0;

    scanf("%d %d", &n, &c);
    for (int i = 0; i < c; i++) {
        scanf("%d %d %d", &a, &b, &di);
        g[a].push_back(make_pair(b, di));
        g[b].push_back(make_pair(a, di));
    }

    dijkstra(1);
    for (int i = 1; i <= n; i++) {
        maior = max(maior, d[i]);
    }

    printf("%d\n", maior);

    return 0;
}
