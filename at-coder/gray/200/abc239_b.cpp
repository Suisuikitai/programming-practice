#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long x;
  cin >> x;
  if (x % 10 == 0 || x >= 0)
    cout << x / 10 << '\n';
  else
    cout << (x / 10) - 1 << '\n';
  return 0;
}
