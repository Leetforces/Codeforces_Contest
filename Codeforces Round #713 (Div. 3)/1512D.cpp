/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 20:46:06 10-04-2021
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
    vector<int> arr(n + 2);
    int total = 0, sum = 0;
    for (int i = 0; i < n + 2; i++)
        cin >> arr[i], total += arr[i];

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
        sum += arr[i];

    bool flag = false;
    int index = -1;

    if (sum == arr[n])
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    int lastElement = arr[n + 1];

    //removing last element
    total -= lastElement;

    
    for (int i = 0; i < n + 1; i++)
    {
        if ((total - arr[i]) == lastElement)
        {
            index = i;
            flag = true;
        }
    }

    if (flag)
    {
        for (int i = 0; i < n + 1; i++)
        {
            if (i != index)
                cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "-1";
    }
    cout << "\n";
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
