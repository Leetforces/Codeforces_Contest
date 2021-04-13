/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 21:28:37 12-04-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 

    int n,q;cin>>n>>q;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        if(mp.find(temp)==mp.end())
        mp[temp]=i+1;
    }

    while(q--)
    {
        int color;cin>>color;
        int index=mp[color];
        cout<<index<<" ";

        for(auto p:mp)
        {
            if(p.second<index)
            {
                mp[p.first]++;
            }
        }
        mp[color]=1;
    }
    
    cout<<"\n";
}


signed main(){
FAST_IO;
int t=1;
// cin>>t;
while(t--)
solve();
return 0;
}
