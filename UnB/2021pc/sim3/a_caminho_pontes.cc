#include <bits/stdc++.h>
using namespace std;

#define MAX 1005
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
    int m, s, t, b;

    scanf("%d %d", &n, &m);
    n += 2;
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &s, &t, &b);
        g[s].push_back(make_pair(t, b));
        g[t].push_back(make_pair(s, b));
    }

    dijkstra(0);
    printf("%d\n", d[n-1]);

    return 0;
}
