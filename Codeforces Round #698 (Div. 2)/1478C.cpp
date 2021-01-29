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
    vector<int> arr(2*n);
    set<int> s;
    for(int i=0;i<2*n;i++)
    cin>>arr[i],s.insert(arr[i]);
    if((int)s.size()!=n) 
    {
        cout<<"NO"<<"\n";
        return;
    }
    sort(arr.begin(),arr.end());
    

    bool flag=true;
    int prefixSum=0;
    for(int i=2*n-1;i>=0;i-=2)
    {
        if(arr[i]!=arr[i-1]){
            flag=false;
            break;
        }
        
        int temp=(i+1)/2;
        // deb(temp);
        arr[i]-=2*prefixSum;
        
        if(arr[i]>0 && arr[i]%(2*temp)==0)
        {
            int p=(arr[i])/(2*temp);
            prefixSum+=p;
            

        }
        else{
            flag=false;
            break;
        }

    }

    if(flag) cout<<"YES";
    else cout<<"NO";
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
