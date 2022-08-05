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
  bool upper = false, lower = false, diff = true;
  for (int i = 0; i < S.size(); i++)
  {
    if (isupper(S[i]))
      upper = true;
    else
      lower = true;
  }
  for (int i = 0; i < S.size(); i++)
    for (int j = i + 1; j < S.size(); j++)
      if (S[i] == S[j])
        diff = false;
  if (upper && lower && diff)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
  return 0;
}
