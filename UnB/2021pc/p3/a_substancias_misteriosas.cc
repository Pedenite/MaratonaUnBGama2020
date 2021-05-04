#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int visitados[MAX];

int bfs(int orig, int dest) {
    int qtd;
    queue<pair<int, int>> fila;
    
    fila.push(make_pair(orig,0));
    
    while(fila.size()) {
        tie(orig, qtd) = fila.front();
        visitados[orig-1] = 1;
        
        if (orig == dest) {
            return qtd;
        }
        
        fila.pop();
        if (orig-1 > 0) {
            if (visitados[orig-2] == 0) {
                visitados[orig-2] = 1;
                fila.push(make_pair(orig-1,qtd+1));
            }
        }
        
        if (orig*2 < MAX) {
            if (visitados[orig*2-1] == 0) {
                visitados[orig*2-1] = 1;
                fila.push(make_pair(orig*2,qtd+1));
            }
        }
    }

    return -1;
}

int main() {
    int x, y, res;
    
    scanf("%d %d", &x, &y);
        
    for(int i = 0; i < MAX; i++)
        visitados[i]=0;
        
    res = bfs(x, y);
    printf("%d\n", res);
    
    return 0;
}
