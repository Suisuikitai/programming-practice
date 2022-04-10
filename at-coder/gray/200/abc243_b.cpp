#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  for (int &a : A)
    cin >> a;
  for (int &b : B)
    cin >> b;
  int ans1 = 0;
  int ans2 = 0;
  rep(i, N)
  {
    if (A[i] == B[i])
      ans1++;
    rep(j, N)
    {
      if (A[i] == B[j])
        ans2++;
    }
  }
  cout << ans1 << '\n';
  cout << ans2 - ans1 << '\n';
  return 0;
}
