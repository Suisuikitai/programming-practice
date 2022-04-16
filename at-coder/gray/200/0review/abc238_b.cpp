#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<int> A(N);
  for (int &a : A)
    cin >> a;
  vector<bool> c(360, false);
  c[0] = true;
  int x = 0;
  for (int &a : A)
  {
    x += a;
    x %= 360;
    c[x] = true;
  }
  int start = 0;
  int ans = 0;
  int i = 0;
  while (i <= 360)
  {
    if (c[i % 360])
    {
      ans = max(ans, i - start);
      start = i;
    }
    i++;
  }
  cout << ans << '\n';
  return 0;
}
