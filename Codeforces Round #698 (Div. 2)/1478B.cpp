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
#define deb(x) cout << "[ " << #x << " = " << x << "] "
int mx = 1000000000;

void solve()
{
    int no, d;
    cin >> no >> d;

    for (int i = 0; i < no; i++)
    {
        int n;
        cin >> n;
        bool flag=false;
        while (n >= d)
        {
            int temp = n;
            while (temp)
            {
                int rem = temp % 10;
                temp /= 10;
                if (rem == d)
                {
                    flag=true;
                    break;
                }
            }
            if(flag) break;
            n -= d;
        }
        
        if(flag) cout<<"YES"<<"\n";
        else cout << "NO"<< "\n";
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
