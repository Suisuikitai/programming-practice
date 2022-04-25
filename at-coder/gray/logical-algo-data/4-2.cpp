#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int tri(int N, vector<int> &dp)
{
  if (dp[N] != -1)
    return dp[N];
  dp[N] = tri(N - 1, dp) + tri(N - 2, dp) + tri(N - 3, dp);
  return dp[N];
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<int> dp(N + 1, -1);
  dp[0] = 0;
  dp[1] = 0;
  dp[2] = 1;
  int ans = tri(N, dp);
  cout << ans << '\n';
  return 0;
}
