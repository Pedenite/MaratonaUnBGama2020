#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, min_x, min_y, max_x, max_y;
    string s;

    cin >> t;
    while (t--) {
        cin >> n;
        min_x = min_y = 0x7fffffff;
        max_x = max_y = 0;
        for (int i = 0; i < n; i++) {
            cin >> s;
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '*') {
                    if (j < min_x) {
                        min_x = j;
                    }
                    if (j > max_x) {
                        max_x = j;
                    }
                    if (i < min_y) {
                        min_y = i;
                    }
                    if (i > max_y) {
                        max_y = i;
                    } 
                }
            }
        }

        if (min_x == max_x) {
            if (min_x == n-1) {
                max_x--;
            } else {
                max_x++;
            }
        }

        if (min_y == max_y) {
            if (min_y == n-1) {
                max_y--;
            } else {
                max_y++;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((j == min_x || j == max_x) && (i == min_y || i == max_y)) {
                    printf("*");
                } else {
                    printf(".");
                }
            }

            printf("\n");
        }
    }

    return 0;
}
