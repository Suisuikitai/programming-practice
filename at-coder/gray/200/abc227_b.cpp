#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> S(N);
	for (int &s : S)
		cin >> s;
	int ans = 0;
	for (int &s : S)
	{
		bool flg = false;
		for (int a = 1; a <= (s - 3) / 7; a++)
		{
			if ((s - 3 * a) % (4 * a + 3) == 0)
			{
				flg = true;
				break;
			}
		}
		if (!flg)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
