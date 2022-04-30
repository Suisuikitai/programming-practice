#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)
template <class T>
void chmax(T &a, T b)
{
  if (a < b)
    a = b;
}
int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, M;
  cin >> N >> M;
  vector<int> a(N);
  vector<vector<double>> f(N + 1, vector<double>(N + 1, 0));
  //区間のコストを求める前処理
  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j < i; j++)
    {
      double sum = 0;
      for (int k = j; k < i; k++)
        sum += a[k];
      f[j][i] = sum / (i - j);
    }
  }
  vector<vector<double>> dp(N + 1, vector<double>(M + 1, -INFINITY));
  dp[0][0] = 0;
  //区間の右
  for (int i = 0; i < N + 1; i++)
  {
    //区間の左
    for (int j = 0; j < i; j++)
    {
      for (int k = 1; k < M + 1; k++)
      {
        //仕切りの数
        chmax(dp[i][k], dp[j][k - 1] + f[j][i]);
      }
    }
  }
  return 0;
}
