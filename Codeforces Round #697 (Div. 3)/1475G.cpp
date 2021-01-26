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

int freq[200001];
int ans[200001];
void solve(){ 
    memset(freq,0,sizeof(freq));
    memset(ans,0,sizeof(ans));
   int n;cin>>n;
   
   int mx=0;
   for(int i=0;i<n;i++)
   {
       int temp;cin>>temp;
       freq[temp]++;
       mx=max(mx,temp);
   }

   for(int i=1;i<=mx;i++)
   {
       if(freq[i])
       {
           ans[i]+=freq[i];
           for(int j=2*i;j<=mx;j+=i)
           ans[j]=max(ans[j],ans[i]);
       }
   }   
   cout<<n-*max_element(ans,ans+mx+1)<<"\n";
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
