/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 20:12:11 10-04-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];

    int x1=-1,y1,x2,y2;

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(s[i][j]=='*')
        {
            if(x1==-1)
            {
                x1=i;y1=j;
            }
            else{
                x2=i;y2=j;
            }
        }
    }
   int x,y,a,b;
   if(x1!=x2 && y1!=y2){
      s[x1][y2]='*';
      s[x2][y1]='*';
   }
   else if(x1==x2){
       if(x1-1>=0){
           s[x1-1][y1]='*';
           s[x2-1][y2]='*';
       }
       else{
          s[x1+1][y1]='*';
           s[x2+1][y2]='*'; 
       }
   }else{
         if(y1-1>=0){
           s[x1][y1-1]='*';
           s[x2][y1-1]='*';
       }
       else{
          s[x1][y1+1]='*';
           s[x2][y2+1]='*'; 
       }
   }

   for(int i=0;i<n;i++)
   cout<<s[i]<<"\n";

}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
