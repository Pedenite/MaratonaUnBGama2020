#include <bits/stdc++.h>
using namespace std;

#define oo 0x7fffffff
typedef vector<vector<pair<int, int>>> grafo;

void dijkstra(int start, grafo &g, int d[]){
	for(int u = 1; u <= g.size(); u++)
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

void add_edge(grafo &g, bool direc, int orig, int dest, int w) {
	g[orig].push_back(make_pair(dest, w));
	if (!direc) {
		g[dest].push_back(make_pair(orig, w));
	}
}

int main() {
    int n, c, d_ober[30], d_taxi[30];
    char ot, ub, x, y;
	grafo g_ober(30);
	grafo g_taxi(30);

    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        scanf("%c %c %c %c %d", &ot, &ub, &x, &y, &c);
		int orig = x - 'A' +1;
		int dest = y - 'A' +1;
        if (ot == 'O') {
			add_edge(g_ober, ub == 'U', orig, dest, c);
		} else {
			add_edge(g_taxi, ub == 'U', orig, dest, c);
		}
    }

	char andre, deivis;
	scanf("%c %c", &andre, &deivis);
	dijkstra(andre, g_ober, d_ober);
	dijkstra(deivis, g_taxi, d_taxi);

	

    return 0;
}
