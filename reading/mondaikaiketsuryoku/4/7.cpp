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

bool func(int i, int w, const vector<int> &a, vector<int> &dp)
{
  if (i == 0)
  {
    if (w == 0)
      return 1;
    else
      return 0;
  }

  if (!dp[w])
    dp[w] = func(i - 1, w, a, dp);
  if (!dp[w - a[i - 1]])
    dp[w - a[i - 1]] = func(i - 1, w - a[i - 1], a, dp);
  return dp[w] || dp[w - a[i - 1]];
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> dp(10000000, -1);
  return 0;
}
