

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
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if(temp!=0)
        pq.push({temp, i});
    }

    vector<pair<int, int>> ans;
    while (pq.size() > 1)
    {
        pair<int, int> top1 = pq.top();
        pq.pop();
        pair<int, int> top2 = pq.top();
        pq.pop();
        if(top1.first>1)
        pq.push({top1.first - 1, top1.second});
        if(top2.first>1)
        pq.push({top2.first - 1, top2.second});

        ans.push_back({top1.second + 1, top2.second + 1});
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << "\n";
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
