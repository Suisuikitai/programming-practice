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
int INF = 1000000000;
int N;
vector<vector<int>> dp(N + 1, vector<int>(N + 1));
vector<vector<bool>> flag(N + 1, vector<bool>(N + 1, false));
vector<int> sum(N + 1);
int f(int l, int r)
{
  if (flag[l][r])
    return dp[l][r];
  flag[l][r] = true;
  if (l == r)
    return 0;
  int fans = INF;
  for (int mid = (r - l) / 2; mid < l; mid++)
    fans = min(fans, f(l, mid) + f(mid + 1, r));
  return dp[l][r] = fans + (sum[r] - sum[l - 1]);
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> N;
  vector<int> a(N);
  rep(i, N)
  {
    cin >> a[i];
    sum[i + 1] = sum[i - 1] + a[i];
  }
  for (int l = 0; l < N; l++)
  {
    for (int r = l + 1; r <= N; r++)
    {
      int sum = 0;
      for (int i = l; i < r; i++)
        sum += a[i];
    }
  }
  return 0;
}

int recursive(int l, int r)
{
  if (flag[l][r])
    return dp[l][r];
  flag[l][r] = true;
  if (l == r)
    return 0;
  int fans = INF;
  for (int i = l; i < r; r++)
    fans = min(fans, recursive(l, (r - l) / 2) + recursive((r - l) / 2 + 1, r));
  return dp[l][r] = fans + sum[r] - sum[l];
}