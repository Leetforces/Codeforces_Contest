
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
   for(int i=0;i<n;i++)
   cin>>arr[i];

   //selection sort
   vector<pair<int,int>> ans;
   for(int i=n-1;i>0;i--){
      int index=i;
      for(int j=0;j<i;j++){
          if(arr[j]>arr[index]) index=j;
      }

      if(index!=i){
          ans.push_back({index,i});
          for(int j=index;j<i;j++){
              arr[j]=arr[j+1];
          }
      }
   }  
   
   cout<<ans.size()<<"\n";
   for(int i=0;i<ans.size();i++){
       cout<<ans[i].first+1<<" "<<ans[i].second+1<<" 1\n";
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
