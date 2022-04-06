#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string t = "oxxoxxoxxoxxoxxoxxoxxoxx";
  string s;
  cin >> s;
  if (t.find(s) != string::npos)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
  return 0;
}
