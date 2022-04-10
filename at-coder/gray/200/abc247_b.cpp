#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  vector<string> vs(N);
  vector<string> vt(N);
  rep(i, N)
  {
    string s, t;
    cin >> s >> t;
    vs[i] = s;
    vt[i] = t;
  }
  rep(i, N)
  {
    bool sflag = false;
    bool tflag = false;
    rep(j, N)
    {
      if (i == j)
        continue;
      if (vs[i] == vs[j])
        sflag = true;
      if (vs[i] == vt[j])
        sflag = true;
      if (vt[i] == vt[j])
        tflag = true;
      if (vt[i] == vs[j])
        tflag = true;
    }
    if (sflag && tflag)
    {
      cout << "No" << '\n';
      return 0;
    }
  }
  cout << "Yes" << '\n';
  return 0;
}
