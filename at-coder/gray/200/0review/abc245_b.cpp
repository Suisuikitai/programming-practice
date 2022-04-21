#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<int> A(2000 + 1, 1);
  rep(i, N)
  {
    int a;
    cin >> a;
    A[a] = 0;
  }
  rep(i, N + 1)
  {
    if (A[i])
    {
      cout << i << '\n';
      return 0;
    }
  }
  return 0;
}
