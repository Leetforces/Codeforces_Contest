/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:28:38 20-05-2021
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout << "[ " << #x << " = " << x << "] "

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int zero = 0;
    for (char ch : s)
    {
        if (ch == '0')
            zero++;
    }
    
    if(zero==1){
        cout<<"BOB\n";
        return;
    }
   
    if(zero&1){
        cout<<"ALICE\n";
    }
    else{
        cout<<"BOB\n";
    }

   
}

signed main()
{
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
