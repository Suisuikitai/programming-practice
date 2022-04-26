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
  int N, W, k;
  cin >> N >> W >> k;
  vector<int> a(N);
  for (int &i : a)
    cin >> i;
  vector<vector<int>> dp(N + 1, vector<int>(W + 1, INFINITY));
  dp[0][0] = 0;
  rep(i, N)
  {
    rep(j, W + 1)
    {
      chmin(dp[i + 1][j], dp[i][j]);
      if (j - a[i] >= 0)
        chmin(dp[i + 1][j], dp[i][j - a[i]] + 1);
    }
  }
  if (dp[N][W] <= k)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
  return 0;
}
