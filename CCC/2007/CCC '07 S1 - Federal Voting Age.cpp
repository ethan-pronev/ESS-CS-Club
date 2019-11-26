//October 14th, 2019
//https://dmoj.ca/problem/ccc07s1
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	for (int i=1; i<=n; i++)
	{
		int a, b, c; cin >> a >> b >> c;
		if (a<1989) cout << "Yes" << endl;
		else if (a==1989&&b<2) cout << "Yes" << endl;
		else if (a==1989&&b==2&&c<=27) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
} 
