#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void print_pq(priority_queue<int> a) {
    printf("[");
    while (!a.empty()) {
        printf("%d,", a.top());
        a.pop();
    }

    printf("\b]\n");
}

int main() {
    int n, temp, l1, l2;
    priority_queue<int> a, b, c;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        a.push(temp);
    }

    for (int i = 0; i < n-1; i++) {
        scanf("%d", &temp);
        b.push(temp);
    }

    for (int i = 0; i < n-2; i++) {
        scanf("%d", &temp);
        c.push(temp);
    }

    l1 = l2 = 0;

    while (!a.empty() && (l2 == 0 || l1 == 0)) {
        if (l1 == 0 && (a.top() != b.top() || b.empty())) {
            l1 = a.top();
        } else if (l2 == 0 && (a.top() != c.top() || c.empty())) {
            l2 = a.top();
        }

        a.pop();
        if (!b.empty()) b.pop();
        if (!c.empty()) c.pop();
    }

    printf("%d\n%d\n", l1, l2);

    return 0;
}
