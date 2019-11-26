//October 5th, 2019
//https://dmoj.ca/problem/dpd
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, w; cin >> n >> w;
    int weight[n+1];
	long long value[n+1], dp[2][w+1];
    for (int i=0; i<=w; i++)
    {
    	dp[0][i]=0;
    	dp[1][i]=0;
	}
    for (int i=1; i<=n; i++) cin >> weight[i] >> value[i];
    for (int i=1; i<=n; i++)
    {
    	for (int j=1; j<=w; j++)
    	{
    		dp[i%2][j]=dp[1-i%2][j];
    		if (weight[i]<=j) dp[i%2][j]=max(dp[i%2][j],dp[1-i%2][j-weight[i]]+value[i]);
		}
	}
	cout << dp[n%2][w] << endl;
}
