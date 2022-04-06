#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

//もう一度解く
int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s, t;
  cin >> s >> t;
  int d0 = (s[0] - t[0] + 26) % 26;
  rep(i, s.size())
  {
    if (d0 != (s[i] - t[i] + 26) % 26)
    {
      cout << "No" << '\n';
      return 0;
    }
  }
  cout << "Yes" << '\n';
  return 0;
}
