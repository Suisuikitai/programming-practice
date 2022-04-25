#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)
int tri(int N)
{
  if (N == 0)
    return 0;
  if (N == 1)
    return 0;
  if (N == 2)
    return 1;
  return tri(N - 1) + tri(N - 2) + tri(N - 3);
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  cout << tri(N) << '\n';
  return 0;
}
