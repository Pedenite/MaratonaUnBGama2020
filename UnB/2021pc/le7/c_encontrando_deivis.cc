#include <bits/stdc++.h>
using namespace std;

#define oo 0x7fffffff
typedef vector<vector<pair<int, int>>> grafo;

void dijkstra(int start, grafo &g, int d[]) {
	for(int u = 0; u < 26; u++)
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
    int n, c, d_ober[26], d_taxi[26];
    char ot, ub, x, y;
	grafo g_ober(30);
	grafo g_taxi(30);

    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        scanf("%c %c %c %c %d", &ot, &ub, &x, &y, &c);
        if (ot == 'O') {
			add_edge(g_ober, ub == 'U', x-'A', y-'A', c);
		} else {
			add_edge(g_taxi, ub == 'U', x-'A', y-'A', c);
		}

		getchar();
    }

	char andre, deivis;
	scanf("%c %c", &andre, &deivis);
	dijkstra(andre-'A', g_ober, d_ober);
	dijkstra(deivis-'A', g_taxi, d_taxi);

	int menor = oo;
	vector<char> res;
	int dist;
	for (int i = 0; i < 26; i++) {
		dist = d_ober[i] + d_taxi[i];
		if (dist < 0)
			continue;

		if (dist < menor) {
			res.clear();
			res.push_back(i+'A');
			menor = dist;
		} else if (dist == menor) {
			res.push_back(i+'A');
		}
	}

	if (menor < 0 || menor >= oo) {
		printf("-1\n");
	} else {
		printf("%d\n", menor);
		sort(res.begin(), res.end());
		for (int elem : res) {
			printf("%c ", elem);
		}
	}

    return 0;
}
