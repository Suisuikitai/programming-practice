#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  int x = 0, y = 0;
  int x_[4] = {1, 0, -1, 0};
  int y_[4] = {0, -1, 0, 1};
  int s = 0;
  rep(i, N)
  {
    char t;
    cin >> t;
    if (t == 'S')
    {
      x += x_[s];
      y += y_[s];
    }
    else
      s = (s + 1) % 4;
  }
  cout << x << ' ' << y << '\n';
  return 0;
}
