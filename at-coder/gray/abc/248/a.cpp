#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  for (int i = 0; i < 10; i++)
  {
    if (s[i] != '0' + i)
    {
      cout << i << '\n';
      break;
    }
  }
  return 0;
}
