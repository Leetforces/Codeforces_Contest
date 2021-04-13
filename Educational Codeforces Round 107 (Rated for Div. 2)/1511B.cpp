
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout << "[ " << #x << " = " << x << "] "

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;

  int x = pow(10, a )-1;
  int y = pow(10, b )-1;

  int minGc = pow(10, c - 1);

  int ansx=minGc;
  int ansy=minGc;

  while(ansx*3<=x) ansx*=3;
  while(ansy*7<=y) ansy*=7;
  
  cout<<ansx<<" "<<ansy<<"\n";
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
