#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)
#define MOD 100000007
int N;
vector<bool> flag(N);
vector<vector<int>> tree(N);
vector<vector<int>> dp(N, vector<int>(N));
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

void f(int i)
{
  if (flag[i])
    return;
  dp[i][0] = 1;
  dp[i][1] = 1;
  for (int j = 0; j < tree[i].size(); j++)
  {
    f(j);
    dp[i][0] = dp[i][0] * (dp[j][0] + dp[j][1]) % MOD;
    dp[i][1] = dp[i][1] * dp[j][0];
  }
}
int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> N;
  for (int i = 1; i < N; i++)
  {
    int x, y;
    cin >> x >> y;
    tree[x].push_back(y);
    tree[y].push_back(x);
  }
  return 0;
}
