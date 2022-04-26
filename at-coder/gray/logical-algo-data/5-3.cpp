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
  vector<vector<bool>> dp(N + 1, vector<bool>(10000 + 1, false));
  dp[0][0] = true;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < 10000 + 1; j++)
    {
      if (!dp[i][j])
        continue;
      dp[i + 1][j] = true;
      if (j + A[i] <= 10000)
        dp[i + 1][j + A[i]] = true;
    }
  }
  int ans = 0;
  rep(i, 10001)
  {
    if (dp[N][i])
      ans++;
  }
  cout << ans << '\n';
  return 0;
}
