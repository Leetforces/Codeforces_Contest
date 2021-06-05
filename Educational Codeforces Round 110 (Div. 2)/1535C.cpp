/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:47:30 04-06-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 

void solve(){ 
    string s;cin>>s;
    int n=(int) s.size();

    int ans=n;
    vector<vector<int>> dp(n,vector<int>(2,0)); 
  
    //for last element
    if(s[n-1]=='?'){
        dp[n-1][0]=1;
        dp[n-1][1]=1;
    }
    else if(s[n-1]=='0'){
        dp[n-1][0]=1;
    }
    else{
        dp[n-1][1]=1;
    }
    
    //from 2nd last
    for(int i=n-2;i>=0;i--){  

            
        if(s[i]=='?'){
            dp[i][0]=1+dp[i+1][1];
            dp[i][1]=1+dp[i+1][0];
        }
        else if(s[i]=='0'){
            dp[i][0]=1+dp[i+1][1];
            dp[i][1]=0;
        }
        else{
            dp[i][0]=0;
            dp[i][1]=1+dp[i+1][0];
        }
    }


    for(int i=0;i<n-1;i++){
        if(s[i]=='?'){
            ans+=max(dp[i+1][0],dp[i+1][1]);
        }
        else if(s[i]=='0'){
            int temp=dp[i+1][1];
            ans+=temp;
           
        }
        else{
           int temp=dp[i+1][0]; 
           ans+=temp;
            
        }
    }

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
