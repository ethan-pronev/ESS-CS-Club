//October 27th, 2019
//https://dmoj.ca/problem/dmopc15c3p2
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll n, total=0, ans=0; cin >> n;
	ll arr[n+1];
	for (int i=1; i<=n; i++)
	{
		cin >> arr[i];
		total+=arr[i];
	}
	if (total%n)
	{
		cout << "Impossible";
		return 0;
	}
	for (int i=1; i<=n; i++) if (arr[i]>total/n) ans+=arr[i]-total/n;
	cout << ans << endl;
}
