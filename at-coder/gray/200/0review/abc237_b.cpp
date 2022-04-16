#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W, 0));
  rep(h, H)
  {
    rep(w, W)
    {
      cin >> A[h][w];
    }
  }
  rep(w, W)
  {
    rep(h, H)
    {
      cout << A[h][w] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
