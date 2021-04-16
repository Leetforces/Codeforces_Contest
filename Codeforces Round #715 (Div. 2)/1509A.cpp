

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
  vector<int> odd,even;
  for (int i = 0; i < n; i++)
  {
      int temp;cin>>temp;
      if(temp&1) odd.push_back(temp);
      else even.push_back(temp);
  }

  if((int)odd.size()<(int)even.size())
  {
      swap(odd,even);
  }

  for(int i=0;i<(int) odd.size();i++)
  cout<<odd[i]<<" ";
  for(int i=0;i<(int) even.size();i++)
  cout<<even[i]<<" ";

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
