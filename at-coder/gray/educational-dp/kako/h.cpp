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

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int H, W;
    cin >> H >> W;
    vector<string> a(H);
    rep(i, H) cin >> a[i];
    vector<vector<long long>> dp(H, vector<long long>(W, 0));
    dp[0][0] = 1;
    rep(i, H - 1) rep(j, W - 1)
    {
        if (i == 0)
            if (a[i][j + 1] == '.')
                dp[i][j + 1] = dp[i][j];
        if (j == 0)
            if (a[i + 1][j] == '.')
                dp[i + 1][j] = dp[i][j];
        if (a[i + 1][j + 1] == '.')
            dp[i + 1][j + 1] = (dp[i + 1][j] + dp[i][j + 1]) % 1000000007;
    }
    cout << dp[H - 1][W - 1] << '\n';
    return 0;
}
