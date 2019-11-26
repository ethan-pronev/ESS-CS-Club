//November 18th, 2019
//https://dmoj.ca/problem/ccc15j5
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n, k; cin >> n >> k;
	int dp[k+1][n+1]; for (int i=1; i<=k; i++) for (int j=1; j<=n; j++) dp[i][j]=0;
	for (int i=1; i<=k; i++) dp[i][i]=1;
	for (int i=1; i<=n; i++) dp[1][i]=1;
	for (int i=2; i<=k; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if (j<=i) continue;
			dp[i][j]+=dp[i-1][j-1];
			if (j-i) dp[i][j]+=dp[i][j-i];
		}
	}
	cout << dp[k][n] << endl;
}
