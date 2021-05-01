#include <bits/stdc++.h>
using namespace std;

#define MAX (int) (4e4+1)
#define oo 0x7fffffff
typedef vector<vector<pair<int, int>>> grafo;

int d[MAX];
grafo g(MAX);

void dijkstra(int start, int n){
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
    int n, m;
    int campo[205][205];
    
    scanf("%d %d", &n, &m);
    getchar();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c = getchar();
            if (c == '.') {
                campo[i][j] = 1;
            } else if (c == 'A') {
                campo[i][j] = 5;
            } else {
                campo[i][j] = oo;
            }
        }

        getchar();
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j < m-1 && campo[i][j+1] != oo) {
                g[i*m+j].push_back(make_pair(i*m+j+1, campo[i][j]));
            }

            if (i < n-1 && campo[i+1][j] != oo) {
                g[i*m+j].push_back(make_pair((i+1)*m+j, campo[i][j]));
            }
        }
    }

    dijkstra(0, n*m);
    printf("%d\n", d[n*m-1]);

    return 0;
}
