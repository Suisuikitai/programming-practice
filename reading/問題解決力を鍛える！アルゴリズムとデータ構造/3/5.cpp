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
  int N;
  cin >> N;
  vector<int> a(N);
  for (int &x : a)
    cin >> x;
  int count = 0;
  while (true)
  {
    int i = 0;
    while (i < N)
    {
      if (a[i] % 2 == 0)
      {
        a[i] /= 2;
        i++;
        continue;
      }
      break;
    }
    if (i < N)
      break;
    count++;
  }
  cout << count << '\n';
  return 0;
}
