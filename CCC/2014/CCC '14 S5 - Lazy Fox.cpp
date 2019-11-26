//November 14th, 2019
//https://dmoj.ca/problem/ccc14s5
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	int xcoord[n+1], ycoord[n+1], dp[n+1], dpdist[n+1], temp[n+1]; xcoord[0]=0; ycoord[0]=0;
	vector<pair<int,pair<int,int>>> v;
	for (int i=0; i<=n; i++) {dp[i]=INT_MIN; dpdist[i]=INT_MAX;} dp[0]=0; dpdist[0]--;
	for (int i=1; i<=n; i++) cin >> xcoord[i] >> ycoord[i];
	for (int i=0; i<n; i++)
		for (int j=i+1; j<=n; j++)
		{
			int dist=pow(xcoord[i]-xcoord[j],2)+pow(ycoord[i]-ycoord[j],2);
			v.push_back({dist,{i,j}});
		}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (int i=0; i<v.size(); i++)
	{
		int dist=v[i].first;
		int j = i;
		for(; j<v.size(); j++){
			if(v[j].first != dist){
				break;
			}
		}
		--j;
		for(int k = i; k<=j; k++){
			int a=v[k].second.first, b=v[k].second.second;
			temp[a] = dp[a];
			temp[b] = dp[b];
		}
		for(int k = i; k<=j; k++){
			//cout << "(" << a << "," << b << ") " << dist << endl;
			int a=v[k].second.first, b=v[k].second.second;
			if (temp[b]+1>dp[a])
			{
				int tempa=dp[b]+1;
				if (a!=0&&dpdist[b]!=INT_MAX)
				{
					dp[a]=tempa;
					dpdist[a]=dist;
				}
			}
			if (temp[a]+1>dp[b])
			{
				int tempb=dp[a]+1;
				if (b!=0&&dpdist[a]!=INT_MAX)
				{
					dp[b]=tempb;
					dpdist[b]=dist;
				}
			}
		}
		i = j;
	}
	int ans=0;
	cout << endl << endl;
	for (int i=1; i<=n; i++) 
	{
		cout << i << " " << dp[i] << endl;
		ans=max(ans,dp[i]);
	}
	cout << ans << endl;
}
