/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:19:31 10-06-2021
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
    vector<int> arr(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if ((sum % n)==0)
    {
        int value = sum / n;
        sort(arr.begin(), arr.end());
        
        int index=upper_bound(arr.begin(),arr.end(),value)-arr.begin();
        cout<<n-index<<"\n";
    }
    else
    {
        cout << "-1\n";
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
