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
  vector<int> dp(N, 0);
  dp[1] = h[1] - h[0];
  for (int i = 2; i < N; i++)
    dp[i] = min(abs(h[i] - h[i - 2]) + dp[i - 2], abs(h[i] - h[i - 1]) + dp[i - 1]);
  cout << dp[N - 1] << '\n';
  return 0;
}
