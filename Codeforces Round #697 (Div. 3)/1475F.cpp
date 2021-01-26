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
    string s1[n],s2[n];

    for(int i=0;i<n;i++) cin>>s1[i];
    for(int i=0;i<n;i++) cin>>s2[i];

    for(int i=0;i<n;i++)
    {
        if(s1[0][i]!='0')
        {
            for(int j=0;j<n;j++)
            {
                if(s1[j][i]=='0')
                s1[j][i]='1';
                else
                s1[j][i]='0';
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        if(s1[i][0]!='0')
        {
            for(int j=0;j<n;j++)
            {
                if(s1[i][j]=='0')
                s1[i][j]='1';
                else
                s1[i][j]='0';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s2[0][i]!='0')
        {
            for(int j=0;j<n;j++)
            {
                if(s2[j][i]=='0')
                s2[j][i]='1';
                else
                s2[j][i]='0';
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        if(s2[i][0]!='0')
        {
            for(int j=0;j<n;j++)
            {
                if(s2[i][j]=='0')
                s2[i][j]='1';
                else
                s2[i][j]='0';
            }
        }
    }
    bool flag=true;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(s1[i][j]!=s2[i][j])
        {
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
