//November 10th, 2019
//https://dmoj.ca/problem/ccc16s4
#include <bits/stdc++.h>
using namespace std;

int n, mx;
int arr[401];
int dp[401][401];

int solve(int l, int r)
{
	int left=l, right=r;
	while (left<right)
	{
		int one=dp[l][left]; if (dp[l][left]==-1) one=solve(l,left);
		int two=dp[right][r]; if (dp[right][r]==-1) two=solve(right,r);
		int mid; if (right-left==1) mid=-1; else if (dp[left+1][right-1]>=0) mid=dp[left+1][right-1]; else mid=solve(left+1,right-1);
		if (one==two&&one&&mid!=0)
		{
			dp[l][r]=one+two+mid;
			if (mid==-1) dp[l][r]++;
			return dp[l][r];
		}
		else if (one>two) right--;
		else if (two>one) left++;
		else
		{
			left++;
			right--;
		}
	}
	return dp[l][r]=0;
}

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	for (int i=1; i<=400; i++) for (int j=i; j<=400; j++) dp[i][j]=-1;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cin >> arr[i];
		dp[i][i]=arr[i];
	}
	for (int i=1; i<=n; i++) for (int j=i; j<=n; j++)
	{
		if (dp[i][j]==-1) solve(i,j);
		mx=max(mx,dp[i][j]);
	}
	cout << mx << endl;
}
