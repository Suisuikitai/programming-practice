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
  int N, A, B;
  cin >> N >> A >> B;
  string white, black;
  for (int width = 0; width < B; width++)
  {
    white += '.';
    black += '#';
  }
  string line[2];
  for (int width = 0; width < N; width++)
  {
    line[0] += !(width % 2) ? white : black;
    line[1] += width % 2 ? white : black;
  }
  for (int line_pattern = 0; line_pattern < N; line_pattern++)
    for (int line_count = 0; line_count < A; line_count++)
      cout << line[line_pattern % 2] << '\n';
  return 0;
}
