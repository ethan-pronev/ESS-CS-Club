//
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n, k; cin >> n >> k;
	int dp[k+1][n+1];
	for (int i=0; i<=k; i++) for (int j=0; j<=n; j++) dp[i][j]=0;
	for (int i=1; i<=n; i++) dp[1][i]=i;
	for (int j=2; j<=k; j++)
	{
		for (int i=1; i<=n; i++)
		{
			dp[j][i]=dp[j][i-1]+dp[j-1][i];
		}
	}
	cout << dp[k][n] << endl;
}
