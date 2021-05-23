/*
    Username: cod_prac
   created: 21:54:58 07-05-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int a,b;cin>>a>>b;

    int x=a,y=a*b,z=(a*(b+1));

    if(x!=y && x!=z && y!=z){
        cout<<"YES\n";
        cout<<x<<" "<<y<<" "<<z<<"\n";
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
