#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, X;
	cin >> N >> X;
	vector<int> A(N);
	for (int &a : A)
		scanf("%d", &a);
	vector<bool> K(N, false);
	int ans = 1;
	K[X - 1] = true;
	int n = A[X - 1];
	while (!K[n - 1])
	{
		K[n - 1] = true;
		n = A[n - 1];
		ans++;
	}
	cout << ans << '\n';
	return 0;
}
