//October 23rd, 2019
//https://dmoj.ca/problem/dmpg17b6
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	double sum=0;
	for (int i=1; i<=n; i++)
	{
		long long x; cin >> x;
		sum+=log2(x);
	}
	cout << int(sum)+1 << endl;
}
