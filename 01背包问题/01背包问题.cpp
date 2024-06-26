#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
ll w[N], d[N], dp[N];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> w[i] >> d[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = m; j >= w[i]; j--)
		{
			dp[j] = max(dp[j], dp[j - w[i]] + d[i]);
		}
	}
	cout << dp[m];
	return 0;
}