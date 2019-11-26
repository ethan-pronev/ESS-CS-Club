//
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n, low, high,count=0; cin >> n >> low >> high;
	for (int i=1; i<=n; i++)
	{
		int a; cin >> a;
		if (a>=low&&a<=high) count++;
	}
	cout << count << endl;
} 
