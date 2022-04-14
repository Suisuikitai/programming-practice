#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	int L,R;
  cin >> L >>R;
  string S;
  cin >> S;
  reverse(S.begin()+L-1, S.begin()+R);
  cout << S << '\n';
	return 0;
}
