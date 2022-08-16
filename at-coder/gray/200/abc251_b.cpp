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
  int N, W;
  cin >> N >> W;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  vector<bool> weight(W + 1);
  for (int i = 0; i < N; i++)
  {
    if (A[i] > W)
      continue;
    weight[A[i]] = true;
    for (int j = i + 1; j < N; j++)
    {
      if (A[i] + A[j] > W)
        continue;
      weight[A[i] + A[j]] = true;
      for (int k = j + 1; k < N; k++)
      {
        if (A[i] + A[j] + A[k] > W)
          continue;
        weight[A[i] + A[j] + A[k]] = true;
      }
    }
  }
  int ans = 0;
  rep(i, W + 1)
  {
    if (weight[i])
      ans++;
  }
  cout << ans << '\n';
  return 0;
}
