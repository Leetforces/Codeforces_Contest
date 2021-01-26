/*
    Author: Manish Kumar
    Username: manicodebits
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout << "[ " << #x << " = " << x << "] "
const int MOD = 1000000007;
int fact[1001];
int power(int x, int a)
{
    int ans = 1;
    x = x % MOD;
    while (a > 0)
    {
        if (a & 1)
            ans = (ans * x) % MOD;
        a >>= 1;
        x = (x * x) % MOD;
    }
    return ans;
}

int ncr(int n,int r)
{
    if(r<n-r)
    r=n-r;
    if (r == 0)
        return 1;

    return (fact[n] * power(fact[r], MOD-2) % MOD * power(fact[n - r], MOD-2) % MOD) % MOD;
}
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    map<int, int> mp, mp1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(), arr.end(), greater<int>());

    for (int i = 0; i < k; i++)
        mp1[arr[i]]++;

    int temp = arr[k - 1];
    int r = mp1[temp];
    int total = mp[temp];
    int ans = ncr(total, r);

    cout << ans << "\n";
}

signed main()
{
    FAST_IO;
    fact[0]=1;
    for(int i=1;i<=1000;i++)
    fact[i]=(fact[i-1]*i)%MOD;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
