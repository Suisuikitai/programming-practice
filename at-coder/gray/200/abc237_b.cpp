#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int h, w;
  cin >> h >> w;
  vector<vector<int>> A(h, vector<int>(w, 0));
  rep(i, h)
  {
    rep(j, w)
    {
      int a;
      cin >> a;
      A[i][j] = a;
    }
  }
  rep(i, w)
  {
    rep(j, h)
    {
      cout << A[j][i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
