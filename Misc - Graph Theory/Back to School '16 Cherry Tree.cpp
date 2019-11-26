//October 17th, 2019
//https://dmoj.ca/problem/bts16p5
#include <bits/stdc++.h>
using namespace std;

int n, c, k, cherries[10005], totalcherries[10005], totalweight[10005];
vector<pair<int,int>> v[10005];

int findweight(int a)
{
	if (v[a].empty()) return totalweight[a];
	for (int i=0; i<v[a].size(); i++)
	{
		int b=v[a][i].first, w=v[a][i].second;
		totalweight[a]+=findweight(b);
	}
	return totalweight[a];
}

int findcherries(int a)
{
	totalcherries[a]=cherries[a];
	if (v[a].empty()) return totalcherries[a];
	for (int i=0; i<v[a].size(); i++)
	{
		int b=v[a][i].first, w=v[a][i].second;
		totalcherries[a]+=findcherries(b);
	}
	return totalcherries[a];
}

int main()	{	//Can also try BFS fom all the leaves simulaneously
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	cin >> n >> c >> k;
	for (int i=1; i<=n; i++) cin >> cherries[i];
	
	for (int i=1; i<n; i++)
	{
		int a, b, c; cin >> a >> b >> c;
		v[a].push_back({b,c});
		totalweight[b]=c;
	}
	
	findcherries(1);
	findweight(1);
	
	int count=0;
	for (int i=2; i<=n; i++)
		if (totalcherries[i]>=c&&totalweight[i]<=k) count++;
	
	cout << count << endl;
}
