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
double calculate(int p1, int p2, int p3)
{
  if (calculated[p1][p2][p3])
    return dp[p1][p2][p3];
  double divisor = 1 - (double)(N - p1 - p2 - p3) / N;
  double ans = 1 / divisor;

  if (p3 > 0)
    ans += calculate(p1, p2 + 1, p3 - 1) * p3 / N / (1 - (double)(N - p1 - p2 - p3) / N);
  if (p2 > 0)
    ans += calculate(p1 + 1, p2 - 1, p3) * p2 / N / (1 - (double)(N - p1 - p2 - p3) / N);
  if (p1 > 0)
    ans += calculate(p1 - 1, p2, p3) * p1 / N / (1 - (double)(N - p1 - p2 - p3) / N);
  calculated[p1][p2][p3] = true;
  return dp[p1][p2][p3] = ans;
}
int main(int argc, char const *argv[])
{
  cin >> N;
  int plate1 = 0, plate2 = 0, plate3 = 0;
  for (int i = 0; i < N; i++)
  {
    int sushi_num;
    cin >> sushi_num;
    if (sushi_num == 1)
      plate1++;
    if (sushi_num == 2)
      plate2++;
    if (sushi_num == 3)
      plate3++;
  }
  dp[0][0][0] = 0;
  calculated[0][0][0] = true;
  cout << fixed << setprecision(10) << calculate(plate1, plate2, plate3) << '\n';
  return 0;
}
