#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

double distance(int x1, int y1, int x2, int y2){
  return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	int N;
  cin >> N;
  vector<int> x(N), y(N);
  rep(i, N){
    cin >> x[i];
    cin >> y[i];
  }
  double ans = 0;
  rep(i ,N){
    rep(j, N){
      if(ans < distance(x[i], y[i], x[j], y[j]))ans = distance(x[i], y[i], x[j], y[j]);
    }
  }
  cout << fixed << setprecision(10) << ans << '\n';
	return 0;
}
