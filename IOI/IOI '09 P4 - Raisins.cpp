//November 18th, 2019
//https://dmoj.ca/problem/ioi09p4
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
int arr[51][51];
int sum[51][51];
ll dp[51][51][51][51];

int solve(int x1, int x2, int y1, int y2)
{
	//cout << endl << "(" << x1 << "," << y1 << ") (" << x2 << "," << y2 << ")     ";
	ll ans=pow(2,30);
	if (x2-x1)
	{
	//	cout << "horizontal   ";
		for (int i=x1; i<x2; i++)
			{
				if (dp[x1][i][y1][y2]==-1) dp[x1][i][y1][y2]=solve(x1,i,y1,y2);
				if (dp[i+1][x2][y1][y2]==-1) dp[i+1][x2][y1][y2]=solve(i+1,x2,y1,y2);
				dp[x1][x2][y1][y2]=dp[x1][i][y1][y2]+dp[i+1][x2][y1][y2]+sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1];
				ans=min(ans,dp[x1][x2][y1][y2]);
			}
	}
	if (y2-y1)
	{
	//	cout << "vertical   ";
		for (int i=y1; i<y2; i++)
			{
				if (dp[x1][x2][y1][i]==-1) dp[x1][x2][y1][i]=solve(x1,x2,y1,i);
				if (dp[x1][x2][i+1][y2]==-1) dp[x1][x2][i+1][y2]=solve(x1,x2,i+1,y2);
				dp[x1][x2][y1][y2]=dp[x1][x2][y1][i]+dp[x1][x2][i+1][y2]+sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1];
				ans=min(ans,dp[x1][x2][y1][y2]);
			}
	}
	return dp[x1][x2][y1][y2]=ans;
}

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	for (int i=1; i<=50; i++) for (int j=1; j<=50; j++) for (int k=1; k<=50; k++) for (int l=1; l<=50; l++) dp[i][j][k][l]=-1;
	for (int i=0; i<=50; i++) for (int j=0; j<=50; j++) sum[i][j]=0;
	cin >> n >> m;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
		{
			cin >> arr[i][j];
			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+arr[i][j];
			dp[i][i][j][j]=0;
		}
	}
	cout << solve(1,n,1,m) << endl;
}
