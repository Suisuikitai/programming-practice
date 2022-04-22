#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int K, N;
  cin >> K >> N;
  int ans = 0;
  for (int x = 0; x <= K; x++)
    for (int y = 0; y <= K; y++)
      if (N - (x + y) >= 0 && N - (x + y) <= K)
        ans++;
  cout << ans << '\n';
  return 0;
}
