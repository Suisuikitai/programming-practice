#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

double calcDistance(pair<int, int> p1, pair<int, int> p2)
{
  return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<pair<int, int>> p(n);
  rep(i, n)
  {
    int x, y;
    cin >> x >> y;
    p[i] = make_pair(x, y);
  }
  double ans = 0.0;
  rep(i, n)
  {
    for (int j = i + 1; j < n; j++)
    {
      double d = calcDistance(p[i], p[j]);
      if (ans < d)
        ans = d;
    }
  }
  cout << std::fixed << std::setprecision(10) << ans << '\n';
  return 0;
}
