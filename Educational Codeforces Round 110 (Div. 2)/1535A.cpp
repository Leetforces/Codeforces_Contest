/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:05:59 04-06-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a> max(c,d) && b>max(c,d)){
        cout<<"NO\n";
    }
    else if(c>max(a,b) && d>max(a,b)){
        cout<<"NO\n";
    }
    else cout<<"YES\n";
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
