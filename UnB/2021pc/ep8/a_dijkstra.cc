#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define MAX (int) (1e5+5)
#define oo 0x7fffffffffffffff

ll d[MAX];
int p[MAX];

vector<vector<pair<int, ll>>> g(MAX);

void dijkstra(int start, int n){
	for(int u = 1; u <= n; u++)
		d[u] = oo;

	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;

	d[start] = 0;
    p[start] = start;
	pq.push(mp(d[start], start));

	ll dt, w;
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
                p[v] = u;
				pq.push(mp(d[v], v));
			}
		}
	}
}

int main() {
    int n, m, a, b, w;

    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d %d %d", &a, &b, &w);
        g[a].pb(mp(b, w));
        g[b].pb(mp(a, w));
    }

    int start = 1;

    dijkstra(start, n);
    if (d[n] < oo) {
        vector<int> l;
        l.pb(n);
        b = p[n];
        while (b != start) {
            l.pb(b);
            b = p[b];
        }

        l.pb(b);
        while (l.size()) {
            b = l.back();
            l.pop_back();
            printf("%d ", b);
        }
    } else {
        printf("-1");
    }

    printf("\n");
    return 0;
}
