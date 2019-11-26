//October 7th, 2019
//https://dmoj.ca/problem/dmopc16c1p3
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int arr[n+1]; double dp[n+1];
    for (int i=1; i<=n; i++) cin >> arr[i];
    dp[0]=0; dp[1]=arr[1]; dp[2]=arr[1]+arr[2]-0.5*min(arr[1],arr[2]);
    for (int i=3; i<=n; i++)
    {
    	int min2=min(arr[i],arr[i-1]);
    	int min3=min(min2,arr[i-2]);
    	dp[i]=min(dp[i-2]+arr[i-1]+arr[i]-0.5*min2,dp[i-3]+arr[i-2]+arr[i-1]+arr[i]-min3);
    	dp[i]=min(dp[i],dp[i-1]+arr[i]);
	}
	cout << fixed << setprecision(1) << dp[n] << endl;
}
