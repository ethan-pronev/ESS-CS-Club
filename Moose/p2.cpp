//
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
//	cin.sync_with_stdio(0);
   // cin.tie(0);
//	cout.tie(0);
	map<pair<int,int>,set<int>> mp; 
	vector<pair<int,int>> best;
	int n; cin >> n;
	int intercept[n+1], slope[n+1];
	for (int i=1; i<=n; i++) cin >> intercept[i] >> slope[i];
	if (n==1)
	{
		cout << 1 << " " << 1 << " " << slope[1]+intercept[1] << endl;
		return 0;
	}
	for (int i=1; i<n; i++)
	{
		for (int j=i+1; j<=n; j++)
		{
			int m1=slope[i], m2=slope[j], c1=intercept[i], c2=intercept[j];
			if (m1==m2) continue;
			if ((c2-c1)%(m1-m2)!=0) continue;
			int time=(c2-c1)/(m1-m2);
			int distance=m1*time+c1;
			if (time<=0||distance<=0) continue;
			mp[{time,distance}].insert(i);
			mp[{time,distance}].insert(j);
		//	cout << i << " " << j << " " << time << " " << distance << endl;
		}
	}
	int mx=0;
	for (auto u:mp) if (u.second.size()>mx) mx=u.second.size();
	for (auto u:mp)
	{
		if (u.second.size()==mx)
		{
			best.push_back({u.first.first,u.first.second});
		}
	}
	sort(best.begin(), best.end());
	cout << mx << " " << best[0].first << " " << best[0].second << endl;
}
