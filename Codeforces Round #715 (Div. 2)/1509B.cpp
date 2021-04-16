/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 23:22:22 16-04-2021
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
    string s;cin>>s;
    vector<int> t,m;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='T') t.push_back(i);
        else m.push_back(i);
    }

    if((int) m.size()!=(n/3))
    {
        cout<<"NO\n";
        return;
    }
    
    int mid=n/3;

    for(int i=0;i<(int)m.size();i++)
    {
        if(!(m[i]>t[i] && m[i]<t[i+mid])){
            cout<<"NO\n";
            return;
        }
    }

     cout<<"YES\n";
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
