#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin >> S;
  sort(S.begin(), S.end());
  cout << S << '\n';
  return 0;
}
