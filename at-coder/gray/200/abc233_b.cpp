#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int l, r;
  cin >> l >> r;
  string s;
  cin >> s;
  reverse(s.begin() + l - 1, s.begin() + r);
  cout << s << endl;
  return 0;
}
