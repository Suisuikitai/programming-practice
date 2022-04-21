#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<int> a(N);
  for (int &i : a)
    cin >> i;
  int ans_1 = 99999;
  int ans_2 = 99999;
  for (int &i : a)
  {
    if (i < ans_1)
      ans_1 = i;
    else if (i < ans_2)
      ans_2 = i;
  }
  cout << ans_2 << '\n';
  return 0;
}
