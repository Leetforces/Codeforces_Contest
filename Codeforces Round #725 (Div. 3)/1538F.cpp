/*
    Author: Manish Kumar
    Username: manicodebits
*/
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout << "[ " << #x << " = " << x << "] "
 

void solve()
{
   
        int l, r;
        cin >> l >> r;

        int ans1=0;
        int ans2=0;

        int index=1;
        while(l){
            ans1+= (index* (l%10));
            l/=10;
            index=(index*10)+1;
        }
        index=1;
        while(r){
            ans2+= (index* (r%10));
            r/=10;
            index=(index*10)+1;
        }
        cout<<ans2-ans1<<"\n";
 
        
  
}
 
signed main()
{
    FAST_IO;
    int t = 1;
    cin>>t;
    while (t--)
        solve();
    return 0;
}
 