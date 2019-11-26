//October 14th, 2019
//https://dmoj.ca/problem/ccc07j3
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	vector <int> v={0,100,500,1000,5000,10000,25000,50000,100000,500000,1000000};
	int sum=1691600;
	int n; cin >> n;
	for (int i=1; i<=n; i++)
	{
		int x; cin >> x;
		sum-=v[x];
	}
	int c; cin >> c;
	if (c*(10-n)>sum) cout << "deal" << endl;
	else cout << "no deal" << endl;
} 
