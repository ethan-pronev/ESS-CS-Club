//October 12th, 2019
//https://dmoj.ca/problem/ccc07j5
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	vector <int> v={0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000};
	int a, b, n; cin >> a >> b >> n;
	for (int i=1; i<=n; i++)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	long long dp[v.size()]; for (int i=0; i<v.size(); i++) dp[i]=0; dp[0]=1;
	sort(v.begin(), v.end());
	
	for (int i=1; i<v.size(); i++)
		for (int j=0; j<i; j++)
			if (v[i]-v[j]>=a&&v[i]-v[j]<=b) dp[i]+=dp[j];
	
	cout << dp[v.size()-1] << endl;
} 
