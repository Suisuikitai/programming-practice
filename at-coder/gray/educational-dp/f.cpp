#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)
template <class T>
void chmax(T &a, T b)
{
  if (a < b)
    a = b;
}
template <class T>
void chmin(T &a, T b)
{
  if (a > b)
    a = b;
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s, t;
  cin >> s >> t;
  int sl = s.size(), tl = t.size();
  vector<vector<int>> dp(sl + 1, vector<int>(tl + 1, 0));
  for (int i = 0; i < sl; ++i)
  {
    for (int j = 0; j < tl; ++j)
    {
      if (s[i] == t[j])
        chmax(dp[i + 1][j + 1], dp[i][j] + 1);
      else
        dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
    }
  }
  int len = dp[sl][tl];
  int i = sl, j = tl;
  char ans[len];
  while (len > 0)
  {
    if (s[i] == t[j])
    {
      --len;
      ans[len] = s[i];
      --i;
      --j;
    }
    else if (dp[i][j] == dp[i - 1][j])
      --i;
    else
      --j;
  }
  cout << ans << '\n';
  return 0;
}
