#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	int N;
  cin >> N;
  vector<string> s(N);
  vector<int> vote(N, 0);
  rep(i, N){
    cin >> s[i];
  }
  int max = 0;
  string ans;
  rep(i, N){
    string name = s[i];
    int count = 0;
    rep(j, N){
      if(name==s[j])count++;
      if(max < count){
        max = count;
        ans = s[i];
      } 
    }
  }
  cout << ans << '\n';
	return 0;
}
