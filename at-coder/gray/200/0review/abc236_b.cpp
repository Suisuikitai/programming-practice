#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for (int i = 0; i < x; i++)

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	int N;
  cin >> N;
  vector<int> A(N*4-1);
  rep(i, N*4-1){
    cin >> A[i];
  }
  vector<int> count(N+1, 0);
  for(int &i: A){
    count[i]++;
  }
  for(int i = 1; i < N+1; i++){
    if(count[i]!=4){
      cout << i << '\n';
      break;
    }
  }
	return 0;
}
