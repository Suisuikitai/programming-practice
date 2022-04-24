#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  string S;
  cin >> N >> S;
  long long ans = 0;
  //+を挟む場所
  for (int bit = 0; bit < (1 << N - 1); bit++)
  {
    long long tmp = 0;
    //与えられた文字列の数字を足していく
    for (int i = 0; i < N - 1; i++)
    {
      tmp *= 10;
      tmp = S[i] - '0';
      if (bit & (1 << i))
      {
        ans += tmp;
        tmp = 0;
      }
    }
    tmp *= 10;
    tmp += S.back() - '0';
    ans += tmp;
  }
  return 0;
}
