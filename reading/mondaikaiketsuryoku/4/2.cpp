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

int trib(int N, vector<int> &dp)
{
  if (N < 2)
    return 0;
  if (N == 2)
    return 1;
  if (dp[N - 1] == 0)
    dp[N - 1] = trib(N - 1, dp);
  if (dp[N - 2] == 0)
    dp[N - 2] = trib(N - 2, dp);
  if (dp[N - 3] == 0)
    dp[N - 3] = trib(N - 3, dp);
  return dp[N - 1] + dp[N - 2] + dp[N - 3];
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<int> dp(N + 1, 0);
  cout << trib(N, dp) << '\n';
  return 0;
}
