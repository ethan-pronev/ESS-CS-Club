//October 7th, 2019
//https://dmoj.ca/problem/dmopc13c3p5
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, f, r; cin >> t >> f >> r;	//t minutes, f food units, r restaurants
    int value[r+1], time[r+1], food[r+1];
    int dp[r+1][t+1][f+1];
    for (int i=1; i<=r; i++) cin >> value[i] >> time[i] >> food[i];
    
    for (int i=0; i<=r; i++)
    	for (int j=0; j<=t; j++)
   			for (int k=0; k<=f; k++)
   				dp[i][j][k]=0;
    
    for (int i=1; i<=r; i++)
    {
    	for (int j=1; j<=t; j++)
    	{
    		for (int k=1; k<=f; k++)
    		{
    			if (time[i]<=j&&food[i]<=k) dp[i][j][k]=dp[i-1][j-time[i]][k-food[i]]+value[i];
    			int maxwithout=dp[i-1][j][k];
    			dp[i][j][k]=max(dp[i][j][k],maxwithout);
			}
		}
	}
	cout << dp[r][t][f] << endl;
}
