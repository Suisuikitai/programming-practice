#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s, t;
  cin >> s >> t;
  int k = (t[0] - s[0] + 26) % 26;
  string s2 = s;
  rep(i, (int)s.size())
      s2[i] = (s2[i] - 'a' + k) % 26 + 'a';
  if (t == s2)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
  return 0;
}
