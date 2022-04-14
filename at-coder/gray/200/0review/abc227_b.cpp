#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<int> S(N);
  rep(i, N)
  {
    cin >> S[i];
  }
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    bool flg = false;
    for (int a = 1; a <= sqrt(S[i]) / 2; a++)

      if ((S[i] - 3 * a) % (4 * a + 3) == 0)
      {
        flg = true;
        break;
      }
    if (!flg)
      ans++;
  }
  cout << ans << '\n';
}
