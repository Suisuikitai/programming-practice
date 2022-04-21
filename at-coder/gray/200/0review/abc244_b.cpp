#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  string T;
  cin >> N >> T;
  int d = 0;
  int x = 0, y = 0;
  rep(i, N)
  {
    if (T[i] == 'R')
    {
      d++;
      d %= 4;
      continue;
    }
    else
    {
      if (d == 0)
        x++;
      if (d == 1)
        y--;
      if (d == 2)
        x--;
      if (d == 3)
        y++;
    }
  }
  cout << x << ' ' << y << '\n';
  return 0;
}
