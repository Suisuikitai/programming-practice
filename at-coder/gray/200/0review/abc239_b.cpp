#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long X;
  cin >> X;
  cout << X / 10 - (X % 10 < 0) << '\n';
  return 0;
}
