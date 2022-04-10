#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b;
  cin >> a >> b;
  double d = sqrt(a * a + b * b);
  double x, y;
  x = a / d;
  y = b / d;
  cout << fixed;
  cout << setprecision(10) << x << ' ' << y << '\n';
  return 0;
}
