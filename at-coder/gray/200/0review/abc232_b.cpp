#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	string s,t;
  cin >> s >> t;
  int k = 'z' - 'a' + 1;
  for(int i = 1; i <= k; i++){
    for(int j = 0; j < s.size(); j++){
      if(s[j]%i==t[j]%i)
    }
  }
	return 0;
}
