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
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    int ans=0;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
        ans=max(ans,mp[v[i]]);
    }
    cout<<ans<<"\n";
    
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
