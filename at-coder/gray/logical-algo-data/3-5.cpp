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
  for (int &i : a)
    cin >> i;
  int min = 99999999;
  for (int i = 0; i < N; i++)
  {
    int count = 0;
    while (a[i] % 2 == 0)
    {
      count++;
      a[i] /= 2;
    }
    if (count < min)
      min = count;
  }
  cout << min << '\n';
  return 0;
}
