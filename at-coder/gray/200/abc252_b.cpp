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
  vector<int> A(N), B(K);
  for (auto &x : A)
    cin >> x;
  for (auto &x : B)
    cin >> x;
  int maximum = 0;
  rep(i, N)
  {
    if (maximum < A[i])
      maximum = A[i];
  }
  for (int i = 0; i < K; i++)
  {
    if (A[B[i] - 1] == maximum)
    {
      cout << "Yes" << '\n';
      return 0;
    }
  }
  cout << "No" << '\n';
  return 0;
}
