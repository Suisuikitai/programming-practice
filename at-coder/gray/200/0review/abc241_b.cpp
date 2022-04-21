#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  rep(i, N)
  {
    cin >> A[i];
  }
  rep(i, M)
  {
    cin >> B[i];
  }
  vector<bool> used(N, false);
  rep(m, M)
  {
    bool complete = false;
    rep(n, N)
    {
      if (B[m] == A[n] && !used[n])
      {
        used[n] = true;
        complete = true;
        break;
      }
    }
    if (!complete)
    {
      cout << "No" << '\n';
      return 0;
    }
  }
  cout << "Yes" << '\n';
  return 0;
}
