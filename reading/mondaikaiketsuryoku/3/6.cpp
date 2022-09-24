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
  int K, N;
  cin >> K >> N;
  int count = 0;
  for (int x = 0; x <= K; x++)
  {
    for (int y = x; y <= K; y++)
    {
      int z = N - (x + y);
      if (z >= 0 && z <= K)
        count++;
    }
  }
  cout << count << '\n';
  return 0;
}
