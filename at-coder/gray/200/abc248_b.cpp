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
  long long A, B, K;
  cin >> A >> B >> K;
  int ans = 0;
  while (A < B)
  {
    A *= K;
    ans++;
  }
  cout << ans << '\n';
  return 0;
}
