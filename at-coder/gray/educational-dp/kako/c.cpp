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
  int N;
  cin >> N;
  vector<int> a(N), b(N), c(N);
  for (int i = 0; i < N; i++)
    cin >> a[i] >> b[i] >> c[i];
  vector<int> dp(3);
  dp[0] = a[0];
  dp[1] = b[0];
  dp[2] = c[0];
  for (int i = 1; i < N; i++)
  {
    int a_ = dp[0], b_ = dp[1], c_ = dp[2];
    dp[0] = max(b_ + a[i], c_ + a[i]);
    dp[1] = max(a_ + b[i], c_ + b[i]);
    dp[2] = max(a_ + c[i], b_ + c[i]);
  }
  int ans = max(dp[0], dp[1]);
  chmax(ans, dp[2]);
  cout << ans << '\n';
  return 0;
}
