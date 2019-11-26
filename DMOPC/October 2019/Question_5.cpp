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
	int one=(n+2)/4;
	int two=(n+1)*3/4;
//	cout << one << " " << two << endl;
	long long count=0;
	for (int i=1; i<=n; i++) count+=min(abs(i-one),abs(i-two));
	cout << count << endl;
} 
