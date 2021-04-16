

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 

int helper(vector<vector<int>>& dp,vector<int>& arr,int i,int j)
{
    if(i==j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    return dp[i][j]= (arr[j]-arr[i]) + min(helper(dp,arr,i+1,j),helper(dp,arr,i,j-1));

}
void solve(){ 
    int n;cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++) cin>>arr[i];
    
    sort(arr.begin(),arr.end());

    vector<vector<int>> dp(n,vector<int>(n,0));

    //Top Down Dp
    // int ans=helper(dp,arr,0,n-1);

    // cout<<ans<<"\n";


    //Bottom up dp
    for(int len=2;len<=n;len++)
    {
        for(int i=0;i+len-1<n;i++)
        {
            int j=i+len-1;

            dp[i][j]=(arr[j]-arr[i])+ min(dp[i+1][j],dp[i][j-1]);
        }
    }
    cout<<dp[0][n-1]<<"\n";
}


signed main(){
FAST_IO;
int t=1;
// cin>>t;
while(t--)
solve();
return 0;
}
