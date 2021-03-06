#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)
#define MOD 1000000007
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
  int N, K;
  cin >> N >> K;
  vector<int> a(N + 1);
  rep(i, N) cin >> a[i + 1];
  vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
  dp[0][0] = 1;
  vector<int> cum(N + 2, 0);
  for (int i = 1; i < N + 1; i++)
  {
    cum[0] = 0;
    for (int j = 1; j < K + 2; j++)
    {
      cum[j] = (cum[j - 1] + dp[i - 1][j - 1]) % MOD;
      // cum[j]=dp[i-1][0]...+dp[i-1][j-1]
      for (int k = 0; k <= a[i]; k++)
      {
        if (j - k >= 0)
          dp[i][j] += dp[i - 1][j - k] % MOD;
      }
    }
    for (int j = 0; j < K + 1; j++)
    {
      dp[i][j] = (cum[j + 1] - cum[max(0, j - a[i])] + MOD) % MOD;
    }
  }
  return 0;
}
