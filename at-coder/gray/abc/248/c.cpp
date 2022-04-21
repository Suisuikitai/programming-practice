#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)
#define reps(i, s, x) for (int i = s; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, M, K;
  cin >> N >> M >> K;
  int d = 998244353;
  //数字をi個使用してjを作れる組み合わせ dp[i][j]
  vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
  dp[0][0] = 1;
  rep(i, N)
  {
    rep(j, K)
    {
      //加算する数
      for (int k = 1; k < M; k++)
      {
        if (j + k <= K)
          dp[i + 1][j + k] = (dp[i + 1][j + k] + dp[i][j]) % d;
      }
    }
  }
  return 0;
}
