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
    int a,b,k;cin>>a>>b>>k;
    
    int boy[k],girl[k];
    map<pair<int,int>,int> mp;
    map<int,int> mp1,mp2;
    for(int i=0;i<k;i++)
    {
        cin>>boy[i];
        mp1[boy[i]]++;
    }

    for(int i=0;i<k;i++)
    {
        cin>>girl[i];
        mp2[girl[i]]++;
        mp[{boy[i],girl[i]}]++;
    }
    int ans=0;
    for(int i=0;i<k;i++)
    {
        ans+=(k-mp1[boy[i]]-mp2[girl[i]]+mp[{boy[i],girl[i]}]);
    }
    ans/=2;
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
