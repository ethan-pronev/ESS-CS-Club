//September 22nd, 2019
//https://dmoj.ca/problem/dpb

#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    int h[n+1], dp[n+1]; for (int i=1; i<=n; i++) dp[i]=1000000000; dp[1]=0;
    for (int i=1; i<=n; i++) cin >> h[i];
    for (int i=2; i<=n; i++)
    {
    	for (int j=1; j<=k; j++)
    	{
    		if (i-j>0) dp[i]=min(dp[i],abs(h[i]-h[i-j])+dp[i-j]);
		}
	}
	cout << dp[n] << endl;
}
