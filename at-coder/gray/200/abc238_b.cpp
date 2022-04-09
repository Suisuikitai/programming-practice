#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> c(360, 0);
  int start = 0;
  c[0] = 1;
  rep(i, n)
  {
    int a;
    cin >> a;
    start = (a + start) % 360;
    c[start] = 1;
  }
  int i = 0;
  int ans = 0;
  int count = 0;
  while (i <= 360)
  {
    count++;
    if (c[i % 360] == 1)
    {
      if (ans < count)
        ans = count;
      count = 0;
    }
    i++;
  }
  cout << ans << '\n';
  return 0;
}
