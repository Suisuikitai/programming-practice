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
vector<int> a(3000, 0);
vector<vector<long long>> dp(3000, vector<long long>(3000, 0));
long long solve(int l, int r)
{
  if (dp[l][r] > 0)
    return dp[l][r];
  if (l == r)
    return dp[l][r] = a[l];
  return dp[l][r] = max(a[l] - solve(l + 1, r), a[r] - solve(l, r - 1));
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> a[i];
  cout << solve(0, N - 1) << '\n';
  return 0;
}
