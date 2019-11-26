//October 8th, 2019
//https://dmoj.ca/problem/ccc07s5
#include <bits/stdc++.h>
using namespace std;

int dp[505][30005];

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t; cin >> t;
	while (t--)
	{
    int n, k, w; cin >> n >> k >> w;
    int arr[n+1], sum[n+1]; sum[0]=0;
    
    for (int i=1; i<=n; i++)
    {
    	cin >> arr[i];
    	sum[i]=sum[i-1]+arr[i];
	}
    for (int i=1; i<=k; i++)	//balls
    {
    	for (int j=1; j<=n; j++)	//pins
    	{
    		dp[i][j]=max(dp[i-1][max(0,j-w)]+sum[j]-sum[max(0,j-w)],dp[i][j-1]);
		}
	}
	cout << dp[k][n] << endl;
	}
}
