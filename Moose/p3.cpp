//
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	int make[2*n+1], cost[2*n+1], sum[2*n+1], net[2*n+1]; sum[0]=0; net[0]=0;
	for (int i=1; i<=n; i++)
	{
		cin >> cost[i] >> make[i];
		cost[i+n]=cost[i];
		make[i+n]=make[i];
	}
	for (int i=1; i<=2*n; i++)
	{
		sum[i]=sum[i-1]+make[i]-cost[i];
		if (sum[i]>=0) net[i]=1;
		else net[i]=0;
	}
	for (int i=1; i<=2*n; i++)
	{
	//	net[i]+=net[i-1];
		cout << sum[i] << " ";
	}
	cout << endl;for (int i=1; i<=2*n; i++) cout << net[i] << " ";cout << endl;
	for (int i=1; i<=n; i++)
	{
		if (sum[i+n]-sum[i-1]>=0)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
