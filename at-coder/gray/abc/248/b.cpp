#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long A, B, K;
  cin >> A >> B >> K;
  int i = 0;
  while (A < B)
  {
    A *= K;
    i++;
  }
  cout << i << '\n';
  return 0;
}
