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
  for (auto &a : h)
    cin >> a;
  vector<long long> dp(N, INFINITY);
  dp[0] = 0;
  rep(i, N)
  {
    if (i + 1 < N)
      chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
    if (i + 2 < N)
      chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
  }
  cout << dp[N-1] << '\n';
  return 0;
}
