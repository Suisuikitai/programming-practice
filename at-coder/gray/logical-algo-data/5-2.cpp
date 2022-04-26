#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  int W;
  cin >> N >> W;
  vector<int> A(N);
  for (int &a : A)
    cin >> a;
  vector<vector<bool>> dp(N, vector<bool>(W + 1, false));
  dp[0][0] = true;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < W + 1; j++)
    {
      if (i > 0 && dp[i - 1][j])
        dp[i][j] = dp[i - 1][j];
      if (j - A[i] >= 0)
        dp[i][j] = dp[i][j] ? dp[i][j] : dp[i][j - A[i]];
    }
  }
  return 0;
}
