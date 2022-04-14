#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	long long a,b;
  cin >> a >> b;
  while(a>0 && b>0){
    if(a%10+b%10>9){
      cout << "Hard" << '\n';
      return 0;
    }
    a/=10,b/=10;
  }
  cout << "Easy" << '\n';
	return 0;
}
