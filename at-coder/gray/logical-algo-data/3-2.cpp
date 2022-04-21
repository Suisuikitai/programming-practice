#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  int a = 0, v = 0, ans = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> a;
    if (a == v)
      ans++;
  }
  cout << ans << '\n';
  return 0;
}
