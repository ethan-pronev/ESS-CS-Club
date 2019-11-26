//November 18th, 2019
//https://dmoj.ca/problem/ccc18s4
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

unordered_map<int,ll> dp;
ll solve(int i)	//i = weight of current state
{
	if (i<=2) return 1;
	int weight=1;
	ll ans=0;	//weight of each branch
	while (weight<i)
	{
		ll temp=dp[weight];
		int x=i/weight-i/(weight+1);	//x = nnumber of branches of weight "weight"
		if (temp==0) temp=solve(weight);
		ans+=x*temp;
		weight=i/(i/(weight+1));
	}
	return dp[i]=ans;
}

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll n; cin >> n;
	ll ans=solve(n);
	cout << ans << endl;
}
