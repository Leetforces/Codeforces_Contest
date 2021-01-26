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

    if(n<=2)
    {
        cout<<"NO\n";
        return;
    }

    if(n&1)
    {
        cout<<"YES";
    }
    else{
        while(n%2==0)
        {
            n/=2;
        }

        if(n>1)
        cout<<"YES";
        else
        cout<<"NO";
    }
    cout<<"\n";
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
