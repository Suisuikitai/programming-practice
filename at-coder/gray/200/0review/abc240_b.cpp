#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  set<int> a;
  rep(i, N)
  {
    int x;
    cin >> x;
    a.insert(x);
  }
  cout << a.size() << '\n';
  return 0;
}
