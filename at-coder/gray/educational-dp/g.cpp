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
int rec(int startPoint, vector<vector<int>> &G, vector<int> &dp)
{
  int depth = 0;
  if (dp[startPoint] != -1)
  {
    for (int i : G[startPoint])
    {
      depth = max(depth, rec(i, G, dp) + 1);
    }
  }
  return dp[startPoint] = depth;
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, M;
  cin >> N >> M;
  vector<vector<int>> G(M + 1);
  for (int i = 0; i < M; ++i)
  {
    int x, y;
    cin >> x >> y;
    G[x].push_back(y);
  }
  //メモ化再帰でいけそうっていう方向性はあっている
  vector<int> dp(M + 1, -1);
  for (int i = 1; i < N + 1; i++)
  {
    if (dp[i] != -1)
      dp[i] = rec(i, G, dp);
  }
  int ans = 0;
  for (int i = 1; i < N + 1; ++i)
    chmax(ans, dp[i]);
  cout << ans << '\n';
  return 0;
}
