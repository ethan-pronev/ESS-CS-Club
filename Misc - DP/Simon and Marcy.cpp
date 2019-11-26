//September 27th, 2019
//https://dmoj.ca/problem/valday15p2
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, w; cin >> n >> w;
    int value[n+1], weight[n+1];
    int dp[n+1][w+1];
	
	for (int i=1; i<=n; i++) dp[i][0]=0;
	for (int i=0; i<=w; i++) dp[0][i]=0;
	
    for (int i=1; i<=n; i++) cin >> value[i] >> weight[i];
    for (int i=1; i<=n; i++)
    {
    	for (int j=1; j<=w; j++)
    	{
    		dp[i][j]=dp[i-1][j];
    		if (weight[i]<=j) dp[i][j]=max(dp[i][j],dp[i-1][j-weight[i]]+value[i]);
		}
	}
    cout << dp[n][w] << endl;
}

/* TEST CASES
5 15
1 1
1 2
4 4
2 7
3 10
*/
