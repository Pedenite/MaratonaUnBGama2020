#include <iostream>
using namespace std;

long long int euclides(long long int a, long long int b)
{
    long long int r = a%b, q;
    while(r != 0)
    {
        q = a/b;
        a = b;
        b = r;
        r = a%b;
    }
    q = a/b;
    return b;
}

int main(){
    long long int a, b, x, y, rx, ry, gcd, total = 0;

    cin >> a >> b >> x >> y;
    do {
        gcd = euclides(x, y);
        x = (long long int) x/gcd;
        y = (long long int) y/gcd;
    } while(gcd != 1);
    
    rx = x;
    ry = y;
    while(rx <= a && ry <= b){
        total++;
        rx += x;
        ry += y;
    }
    cout << total;

    return 0;
}