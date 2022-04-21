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
  int min = 999999999, max = -999999999;
  for (int &i : a)
    cin >> i;
  for (int &i : a)
  {
    if (i < min)
      min = i;
    if (max < i)
      max = i;
  }
  cout << max - min << '\n';
  return 0;
}
