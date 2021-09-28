

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    string s;cin>>s;    
    vector<int> a,b;
    for(int i=0;i<s.size();i++){   
        if(s[i]=='B') b.push_back(i);
        else a.push_back(i);
    }
    
    
    if((int)a.size()!=(int)b.size()) {
        cout<<"NO\n";
        return;
    }

    // for(int i=0;i<a.size();i++){
    //     int index= a[i];
    //     bool flag=false;
    //     for(int j=0;j<b.size();j++){
    //         if((b[j]!=-1) && (index+1!=b[j]) && (index-1!=b[j])){
    //            flag=true;
    //            b[j]=-1;
    //            break;
    //         }
    //     }
    //     if(flag==false){
    //         cout<<"NO\n";
    //         return;
    //     }
    // }
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
