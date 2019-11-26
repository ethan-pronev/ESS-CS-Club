//October 6th, 2019
//https://dmoj.ca/problem/ccc07s4
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector<int> v[n+1];
    long long dp[n+1]={0}; dp[1]=1;
    while (1)
    {
    	int a, b; cin >> a >> b;
    	if (a==0&&b==0) break;
    	v[a].push_back(b);
	}
	for (int i=1; i<=n; i++)
		for (int j=0; j<v[i].size(); j++)
			dp[v[i][j]]+=dp[i];
	
	cout << dp[n] << endl;
}
