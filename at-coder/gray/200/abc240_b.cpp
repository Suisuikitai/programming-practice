#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  set<int> s;
  rep(i, n)
  {
    int a;
    cin >> a;
    s.insert(a);
  }
  cout << s.size() << '\n';
  return 0;
}
