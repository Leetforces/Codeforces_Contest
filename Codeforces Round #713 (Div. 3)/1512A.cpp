/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 11:04:31 11-04-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    map<int,int> mp;
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i],mp[arr[i]]++;

    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)
        {
            cout<<i+1<<"\n";
            return;
        }
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
