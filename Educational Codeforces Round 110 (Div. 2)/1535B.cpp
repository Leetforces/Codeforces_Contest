/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:13:46 04-06-2021
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
    vector<int> odd,even;

    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        if(temp&1) odd.push_back(temp);
        else even.push_back(temp);
    }
    vector<int> temp;
    for(int val:even) temp.push_back(val);
    for(int val:odd) temp.push_back(val);

    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(temp[i],2*temp[j])>1){
                ans++;
            }

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
