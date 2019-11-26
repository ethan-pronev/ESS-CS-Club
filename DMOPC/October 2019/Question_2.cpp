//
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n, m; cin >> n >> m;
	int arr[n+1][m+1], dp[n+1][m+1];
	
	for (int i=0; i<=n; i++)
		for (int j=0; j<=m; j++) dp[i][j]=pow(10,9); dp[1][1]=arr[1][1]; dp[0][1]=0;
	
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			cin >> arr[i][j];
	
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			dp[i][j]=min(dp[i-1][j],dp[i][j-1])+arr[i][j];
	
	cout << dp[n][m] << endl;
} 
