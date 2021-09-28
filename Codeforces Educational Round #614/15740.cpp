/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:06:47 20-09-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 

int N;
int cnt;
void helper(int open,int closed,string s){
    if(open>N || closed>N || closed>open) return;
    if(open==N && closed==N){
        cout<<s<<"\n";
        cnt++;
        return;
    }
    if(cnt==N) return;
    if(open<N){
       helper(open+1,closed,s+'(');
    }
    if(closed<N){
        helper(open,closed+1,s+')');
    }
}
void solve(){ 
    int n;cin>>n;
    N=n;
    cnt=0;
    int open=n,closed=n;
    string s="";
    helper(0,0,s);
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
