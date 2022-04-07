#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> lack(n + 1, 0);
  rep(i, n * 4 - 1)
  {
    int a;
    cin >> a;
    lack[a]++;
  }
  for (int i = 1; i < n + 1; i++)
  {
    if (lack[i] != 4)
    {
      cout << i << '\n';
      return 0;
    }
  }
  return 0;
}
