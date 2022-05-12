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
  int V = 100000;
  vector<vector<int>> dp(N + 1, vector<int>(V + 1, 1000000001));
  dp[0][0] = 0;
  rep(i, N)
  {
    rep(j, V + 1)
    {
      chmin(dp[i + 1][j], dp[i][j]);
      if (j - v[i] >= 0)
        chmin(dp[i + 1][j], dp[i][j - v[i]] + w[i]);
    }
  }
  int i = V;
  while (dp[N][i] > W)
    --i;
  cout << i << '\n';
  return 0;
}
