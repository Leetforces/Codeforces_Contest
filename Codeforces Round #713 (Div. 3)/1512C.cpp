/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 20:24:22 10-04-2021
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
    int a, b;
    cin >> a >> b;
    int n = a + b;
    string s;
    cin >> s;

    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] == '?' && s[j] == '?')
        {
        }
        else if (s[i] == '?')
        {
            if (s[j] == '0')
            {
                a -= 2;
            }
            else
            {
                b -= 2;
            }
            s[i] = s[j];
        }
        else if (s[j] == '?')
        {
            if (s[i] == '0')
            {
                a -= 2;
            }
            else
            {
                b -= 2;
            }
            s[j] = s[i];
        }
        else
        {
            if (s[i] == '0' && s[j] == '0')
            {
                a -= 2;
            }
            else if (s[i] == '1' && s[j] == '1')
            {
                b -= 2;
            }
            else
            {
                cout << "-1\n";
                return;
            }
        }
        if (a < 0 || b < 0)
        {
            cout << "-1\n";
            return;
        }
        i++;
        j--;
    }

    if (i == j)
    {
        if (s[i] == '0')
        {
            a--;
        }
        else if (s[i] == '1')
        {
            b--;
        }
        else
        {
            if (a & 1)
            {
                s[i] = '0';
                a--;
            }
            else if (b & 1)
            {
                s[i] = '1';
                b--;
            }
            else
            {
                cout << "-1\n";
                return;
            }
        }
    }

    i = 0, j = n - 1;

    while (i < j)
    {
        if (s[i] == '?')
        {
            if (a)
            {
                a -= 2;
                s[i] = '0';
                s[j] = '0';
            }
            else
            {
                b -= 2;
                s[i] = '1';
                s[j] = '1';
            }
        }
        if (a < 0 || b < 0)
        {
            cout << "-1\n";
            return;
        }
        i++;
        j--;
    }

    if (!(a == 0 && b == 0))
    {
        cout << "-1\n";
        return;
    }
    cout << s << "\n";
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
