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
double dp[301][301][301];
bool calculated[301][301][301];
int N;
double calculate(int plate1, int plate2, int plate3)
{
  if (calculated[plate1][plate2][plate3])
    return dp[plate1][plate2][plate3];
  //サイコロを振る期待値は最低でも1
  //すしを1つ食べるためにはサイコロを少なくとも1回は振る必要があるから
  //あとはそれからどれだけ増えるか
  double ans = 1.0;
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> N;
  vector<int> a(N + 1);
  int plate1 = 0;
  int plate2 = 0;
  int plate3 = 0;
  rep(i, N)
  {
    int sushi_quantity = 0;
    cin >> sushi_quantity;
    if (sushi_quantity == 1)
      plate1++;
    if (sushi_quantity == 2)
      plate2++;
    if (sushi_quantity == 3)
      plate3++;
  }
  return 0;
}
