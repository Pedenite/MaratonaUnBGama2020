
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        long long x, y;
        long long ans1, ans2;
        cin >> ans1 >> ans2;
        for(int i=1; i<n; i++){
            cin >> x >> y;
            long long a = max(ans1/x, ans2/y);
            if(x*a<ans1 || y*a<ans2) a++;
            ans1 = x*a;
            ans2 = y*a;
            cout << "\n--->>> " << ans1 << " " << ans2 << endl;
        }
        cout<<ans1+ans2<<endl; 
    }
    return 0;
}