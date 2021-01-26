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

void solve()
{
    int n, mem;
    cin >> n >> mem;

    vector<int> a(n), b(n), one, two;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if(b[i]==1)
        one.push_back(a[i]);
        else
        two.push_back(a[i]);
    }

    sort(one.begin(),one.end(),greater<int>());
    sort(two.begin(),two.end(),greater<int>());

    for(int i=1;i<one.size();i++)
    one[i]+=one[i-1];
    for(int i=1;i<two.size();i++)
    two[i]+=two[i-1];

    int ans=INT_MAX;

    for(int i=0;i<two.size();i++)
    {
        int req=(mem-two[i]);

        if(req<=0){
            ans=min(ans,2*(i+1));
            break;
        }


        int index=lower_bound(one.begin(),one.end(),req)-one.begin();
        if(index!=one.size())
        {
            ans=min(ans,2*(i+1)+(index+1));
        }
    }
     int index=lower_bound(one.begin(),one.end(),mem)-one.begin();
     if(index!=one.size())
     ans=min(ans,index+1);

     if(ans==INT_MAX) cout<<"-1";
     else cout<<ans;
     cout<<"\n";


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
