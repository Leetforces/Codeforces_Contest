/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:17:50 20-09-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    
    int mx_adj=0;
    if(a) mx_adj+=a-1;
    if(b) mx_adj+=b-1;
    if(c) mx_adj+=c-1;

    int mn_adj=0;

    int mx= max({a,b,c});
    int rem=a+b+c-mx;

    mn_adj= max((int)0,(mx-rem-1));

    if(m>=mn_adj && m<=mx_adj){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
