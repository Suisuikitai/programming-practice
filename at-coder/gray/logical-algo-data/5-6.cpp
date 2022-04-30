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
  int N, W;
  cin >> N >> W;
  vector<int> a(N), m(N);
  for (int &i : a)
    cin >> i;
  for (int &i : m)
    cin >> i;
  vector<vector<int>> dp(N + 1, vector<int>(W + 1, INT32_MAX));
  dp[0][0] = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < W + 1; j++)
    {
      if (dp[i][j] < INT32_MAX)
        chmin(dp[i + 1][j], 0);
      if (j - a[i] >= 0 && dp[i + 1][j - a[i]] < m[i])
        chmin(dp[i + 1][j], dp[i + 1][j - a[i]] + 1);
    }
  }
  return 0;
}
