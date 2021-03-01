#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    double a, b, c;
    double x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0) {
        printf("-1\n");
    } else if (a == 0 && b == 0) {
        printf("0\n");
    } else if (a == 0) {
        x1 = -c/b;
        printf("1\n%lf\n", x1);
    } else {
        double delta = pow(b, 2) - 4*a*c;
        // cout << delta << '\n';
        if (delta < 0) {
            printf("0\n");
        } else if (delta == 0) {
            x1 = -b/(2*a);
            printf("1\n%lf", x1);
        } else {
            printf("2\n");
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            if (x1 > x2) {
                printf("%lf\n", x2);
                printf("%lf\n", x1);
            } else {
                printf("%lf\n", x1);
                printf("%lf\n", x2);
            }
        }
    }

    return 0;
}
