#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, x;
  cin >> n >> x;
  x--;
  vector<int> A(n);
  vector<bool> K(n, true);
  for (int &a : A)
  {
    cin >> a;
    a--;
  }
  int ans = 0;
  while (K[x])
  {
    K[x] = false;
    ans++;
    x = A[x];
  }
  cout << ans << '\n';
  return 0;
}
