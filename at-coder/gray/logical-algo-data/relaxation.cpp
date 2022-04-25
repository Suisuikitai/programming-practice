#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

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
  vector<long long> h(N);
  rep(i, N) cin >> h[i];
  vector<long long> dp(N, INFINITY);
  dp[0] = 0;
  for (int i = 1; i < N; i++)
  {
    chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    if (i > 1)
      chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
  }
  cout << dp[N - 1] << '\n';
  return 0;
}
