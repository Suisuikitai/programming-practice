#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	string s,t;
  cin >> s;
  t = "oxxoxxoxxoxxoxxoxxoxxoxx";
  if(t.find(s) != string::npos){
    cout << "Yes" << '\n';
    return 0;
  }
  cout << "No" << '\n';
	return 0;
}
