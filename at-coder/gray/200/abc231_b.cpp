#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  map<string, int> m;
  int max = 0;
  string ans = "";
  rep(i, n)
  {
    string s;
    cin >> s;
    if (m.find(s) != m.end())
      m[s]++;
    else
      m[s] = 1;
    if (max < m[s])
    {
      max = m[s];
      ans = s;
    }
  }
  cout << ans << '\n';
  return 0;
}
