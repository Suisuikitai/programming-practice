#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)
template <class T>
void chmax(T &a, T b)
{
  if (a < b)
    a = b;
}
template <class T>
void chmin(T &a, T b)
{
  if (a > b)
    a = b;
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin >> S;
  bool has_lower = false, has_upper = false, all_diff = true;
  for (int i = 0; i < S.size(); i++)
  {
    if (isupper(S[i]))
      has_upper = true;
    else
      has_lower = true;
  }
  for (int i = 0; i < S.size(); i++)
  {
    for (int j = i + 1; j < S.size(); j++)
      if (S[i] == S[j])
      {
        all_diff = false;
        break;
      }
    if (!all_diff)
      break;
  }
  if (has_lower && has_upper && all_diff)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
  return 0;
}
