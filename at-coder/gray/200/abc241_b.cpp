#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<int> A(n, 0), B(m, 0);
  vector<bool> used(n, false);
  for (int &a : A)
    cin >> a;
  for (int &b : B)
    cin >> b;
  bool find;
  rep(i, m)
  {
    int b = B[i];
    find = false;
    rep(j, n)
    {
      if (A[j] == b && !used[j])
      {
        used[j] = true;
        find = true;
        break;
      }
    }
    if (!find)
    {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}
