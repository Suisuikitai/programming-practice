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
  vector<int> a(N);
  rep(i, N) cin >> a[i];
  vector<bool> dp(K + 1, false);
  for (int i = a[0]; i < K + 1; i++)
    for (int j = 0; j < N; j++)
      if (i - a[j] >= 0 && !dp[i - a[j]])
        dp[i] = true;
  if (dp[K])
    cout << "First" << '\n';
  else
    cout << "Second" << '\n';
  return 0;
}
