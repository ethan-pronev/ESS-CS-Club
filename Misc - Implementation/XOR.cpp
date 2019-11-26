//October 29th, 2019
//https://dmoj.ca/problem/xor
#include <bits/stdc++.h>
using namespace std;

int findxor (int x)
{
	int ans=(x+1)/2%2;
	if (x%2==0) ans^=x;
	return ans;
}

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	for (int i=1; i<=n; i++)
	{
		int a, b; cin >> a >> b;	
		int ans=findxor(b)^findxor(a-1);
		cout << ans << endl;
	}
}
