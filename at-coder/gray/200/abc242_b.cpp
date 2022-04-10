#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)
// 19 49
int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  char ch = 'a';
  while (ch <= 'z')
  {
    rep(i, s.size())
    {
      if (s[i] == ch)
        cout << s[i];
    }
    ch++;
  }
  cout << '\n';
  return 0;
}
