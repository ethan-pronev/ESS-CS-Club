//
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n, qq; cin >> n >> qq;
	int arr[n+1];
	for (int i=1; i<=n; i++) cin >> arr[i];
	vector<pair<int,ll>> v[n+1];
	v[1].push_back({2,abs(arr[1]-arr[2])});
	v[1].push_back({3,abs(arr[1]-arr[3])});
	v[n].push_back({n-1,abs(arr[n]-arr[n-1])});
	v[n].push_back({n-2,abs(arr[n]-arr[n-2])});
	for (int i=2; i<=n-1; i++)
	{
		v[i].push_back({i-1,abs(arr[i]-arr[i-1])});
		v[i].push_back({i+1,abs(arr[i]-arr[i+1])});
	}
	for (int i=3; i<=n-2; i++)
	{
		v[i].push_back({i-2,abs(arr[i]-arr[i-2])});
		v[i].push_back({i+2,abs(arr[i]-arr[i+2])});
	}
	
	int x, y; cin >> x >> y;
	ll distance[n+1]; for (int i=1; i<=n; i++)distance[i]=pow(10,18); distance[x]=0;
	bool visited[n+1];
	priority_queue<pair<ll,int>> q; q.push({0,x});
	while (!q.empty())
	{
		int a=q.top().second; q.pop();
		if (visited[a]) continue;
		visited[a]=true;
		for (int i=0; i<v[a].size(); i++)
		{
			int b=v[a][i].first;
			ll d=v[a][i].second;
			if (distance[a]+d<distance[b])
			{
				distance[b]=distance[a]+d;
				q.push({-distance[b],b});
			}
		}
	}
	cout << distance[y] << endl;
}
