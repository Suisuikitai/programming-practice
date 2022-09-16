#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)
// nのk bit目が1か == kは集合nに属するか
#define included(n, k) (n >> k & 1)
#define MOD 100000007
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
  int N;
  cin >> N;
  // input
  vector<vector<int>> a(N, vector<int>(N));
  vector<vector<int>> dp(N + 1, vector<int>(N + 1));
  rep(i, N) rep(j, N) cin >> a[i][j];
  dp[0][0] = 1;
  // for (int i = 1; i < N + 1; i++)
  // {
  //   rep(S, 1 << N)
  //   {
  //     rep(j, N)
  //     {
  //       if (included(S, j) == 1 && a[i - 1][j] == 1)
  //       {
  //         dp[i][S] = (dp[i][S] + dp[i - 1][S ^ (1 << j)]) % MOD;
  //       }
  //     }
  //   }
  // }
  cout << (5 ^ (1 << 2)) << endl;
  return 0;
}
