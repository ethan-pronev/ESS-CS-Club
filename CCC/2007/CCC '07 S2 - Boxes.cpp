//October 14th, 2019
//https://dmoj.ca/problem/ccc07s2
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n, m; cin >> n;
	int arr[4][n+1];
	for (int i=1; i<=n; i++) cin >> arr[1][i] >> arr[2][i] >> arr[3][i];
	cin >> m;
	for (int j=1; j<=m; j++)
	{
		long long mn=pow(10,18);
		int a, b, c; cin >> a >> b >> c;
		for (int i=1; i<=n; i++)
		{
			int aa=arr[1][i], bb=arr[2][i], cc=arr[3][i];
			long long v=aa*bb*cc;
			if ((a<=aa&&b<=bb&&c<=cc)||(a<=aa&&c<=bb&&b<=cc)||(b<=aa&&a<=bb&&c<=cc)||(b<=aa&&c<=bb&&a<=cc)||(c<=aa&&a<=bb&&b<=cc)||(c<=aa&&b<=bb&&a<=cc)) mn=min(mn,v);
		}
		if (mn==pow(10,18)) cout << "Item does not fit.\n";
		else cout << mn << endl;
	}
} 
