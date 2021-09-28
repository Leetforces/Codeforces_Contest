

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
  
  deque<int> ans;

  for(int i=0;i<n;i++){
      if(ans.size()==0){
          ans.push_back(arr[i]);
      }
      else{
          if(arr[i]<=ans.front()){
             ans.push_front(arr[i]);
          }
          else{
              ans.push_back(arr[i]);
          }
      }
  }    
  for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
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
