#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<int> a(N), b(N), c(N);
  rep(i, N)
  {
    cin >> a[i];
    cin >> b[i];
    cin >> c[i];
  }
  vector<int> dp(3);
  dp[0] = a[0];
  dp[1] = b[0];
  dp[2] = c[0];
  for (int i = 1; i < N; i++)
  {
    int _a = dp[0], _b = dp[1], _c = dp[2];
    dp[0] = max(_b, _c) + a[i];
    dp[1] = max(_a, _c) + b[i];
    dp[2] = max(_a, _b) + c[i];
  }
  int ans = dp[0] > dp[1] ? dp[0] : dp[1];
  ans = dp[2] > ans ? dp[2] : ans;
  cout << ans << '\n';
  return 0;
}
