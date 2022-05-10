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
  vector<int> w(N), v(N);
  for (int i = 0; i < N; i++)
    cin >> w[i] >> v[i];
  // i番目までの重さwまでの最大値
  vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < W + 1; j++)
    {
      chmax(dp[i + 1][j], dp[i][j]);
      if (j - w[i] >= 0)
        chmax(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
    }
  }
  cout << dp[N][W] << '\n';
  return 0;
}
