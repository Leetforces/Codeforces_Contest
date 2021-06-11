/*
  Author: Manish Kumar
  Username: manicodebits
  Created: 19:56:17 10-06-2021
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
    vector<int> arr(n);
    int mx=INT_MIN;
    int mn=INT_MAX;
    int posmn,posmx;
    for(int i=0;i<n;i++){
      cin>>arr[i];

      if(arr[i]>mx){
          mx=arr[i];
          posmx=i;
      }
      if(arr[i]<mn){
          mn=arr[i];
          posmn=i;
      }

    }
    
    if(posmn>posmx) swap(posmn,posmx);
    int ans= min({posmn+1+(n-posmx),posmx+1,(n-posmn)});
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
