/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:29:07 20-09-2021
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout << "[ " << #x << " = " << x << "] "

void solve()
{
    //input power and calculate totalPower
    int n;
    cin >> n;
    vector<int> power(n);
    int totalPower = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> power[i];
        totalPower += power[i];
    }

    // sort the power in ascending order
    sort(power.begin(), power.end());
    
    // number of dragons
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        //input dragon defence and attack power
        int x, y;
        cin >> x >> y;
        
        // find the index of power just >= (x) ->dragon defence power
        int index = lower_bound(power.begin(), power.end(), x) - power.begin();

        int minEngeryRequired = LONG_LONG_MAX;
        
        // if index exits
        if (index != n)
        {
            int remainingPower = totalPower - power[index];

            int defencePowerRequired = max((int)0, y - remainingPower);
            minEngeryRequired = max((int)0, defencePowerRequired);
        }
        
        // just lower power than dragon defence power ->(x) 
        index--;
        if (index >= 0)
        {
            int remainingPower = totalPower - power[index];
            int attackPowerRequired = max((int) 0,(x - power[index]));
            int defencePowerRequired = max((int)0, y - remainingPower);
            
            minEngeryRequired = min(minEngeryRequired, attackPowerRequired+defencePowerRequired);
        }

        cout << minEngeryRequired << "\n";
    }
}

signed main()
{
    FAST_IO;
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}
