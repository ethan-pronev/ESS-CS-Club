//
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m;
vector <int> v[1005];
int colour[1005];

int fill (int a, int x)
{
	
}

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i=1; i<=m; i++)
	{
		int a, b; cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i=1; i<=n; i++)
	{
		if (colour[i]==0) fill(i,0);
	}
	
}
