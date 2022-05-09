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
  int N, K;
  cin >> N >> K;
  vector<int> h(N);
  for (int &a : h)
    cin >> a;
  vector<int> dp(N, 1000000000);
  dp[0] = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 1; j < K + 1; j++)
    {
      if (i + j >= N)
        break;
      chmin(dp[i + j], abs(h[i + j] - h[i]) + dp[i]);
    }
  }
  cout << dp[N - 1] << '\n';
  return 0;
}
