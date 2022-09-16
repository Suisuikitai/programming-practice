#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<int> h(N);
  for (int &a : h)
    cin >> a;
  vector<int> dp(N, 1000000000);
  dp[0] = 0;
  for (int i = 0; i < N; i++)
  {
    if (i + 1 < N)
      dp[i + 1] = min(abs(h[i + 1] - h[i]) + dp[i], dp[i + 1]);
    if (i + 2 < N)
      dp[i + 2] = min(abs(h[i + 2] - h[i]) + dp[i], dp[i + 2]);
  }
  cout << dp[N - 1] << '\n';
  return 0;
}
