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
  vector<double> p(N + 1);
  rep(i, N) cin >> p[i + 1];
  vector<vector<double>> dp(N + 1, vector<double>(N + 1, 0.0));
  dp[1][1] = p[1];
  dp[1][0] = 1.0 - p[1];

  for (int coin_number = 1; coin_number < N; coin_number++)
  {
    for (int front_number = 0; front_number <= coin_number; front_number++)
    {
      dp[coin_number + 1][front_number] = dp[coin_number][front_number] * (1 - p[coin_number + 1]);
      if (front_number - 1 >= 0)
        dp[coin_number + 1][front_number] += dp[coin_number][front_number - 1] * p[coin_number + 1];
      dp[coin_number + 1][front_number + 1] = dp[coin_number][front_number] * p[coin_number + 1];
    }
  }
  double ans = 0.0;
  for (int i = N / 2 + 1; i < N + 1; i++)
    ans += dp[N][i];

  cout << fixed << setprecision(10) << ans << '\n';
  return 0;
}
