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
  string S, T;
  vector<vector<int>> dp(S.length() + 1, vector<int>(T.length() + 1, 0));
  cin >> S >> T;
  dp[0][0] = 0;
  for (int i = 0; i < S.length() + 1; i++)
  {
    for (int j = 0; j < T.length() + 1; j++)
    {
      if (i > 0 && j > 0)
      {
        if (S[i] == T[j])
          chmax(dp[i][j], dp[i - 1][j - 1]);
        else
          chmax(dp[i][j], dp[i - 1][j - 1] + 1);
      }
      if (i > 0)
        chmax(dp[i][j], dp[i - 1][j]);
      if (j > 0)
        chmax(dp[i][j], dp[i][j - 1]);
    }
  }
  return 0;
}
