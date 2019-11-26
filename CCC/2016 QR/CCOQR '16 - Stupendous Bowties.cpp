//November 7th, 2019
//https://dmoj.ca/problem/ccoqr16p1
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	int xx[n+1], yy[n+1];
    unordered_map<int,vector<int>> xval;
    unordered_map<int,vector<int>> yval;
    ll count=0;
    for (int i=1; i<=n; i++)
    {
        cin >> xx[i] >> yy[i];
        xval[xx[i]].push_back(yy[i]);
        yval[yy[i]].push_back(xx[i]);
    }
    for (auto i=xval.begin(); i!=xval.end(); i++) sort(i->second.begin(),i->second.end());
    for (auto i=yval.begin(); i!=yval.end(); i++) sort(i->second.begin(),i->second.end());
    for (int i=1; i<=n; i++)
    {
        int x=xx[i], y=yy[i];
        int xidx=lower_bound(xval[x].begin(),xval[x].end(),y)-xval[x].begin();
        int yidx=lower_bound(yval[y].begin(),yval[y].end(),x)-yval[y].begin();
        //cout << "(" << x << "," << y << ") up: " << xidx << " down: " << xval[x].size()-xidx-1 << " left: " << yidx << " right: " << yval[y].size()-yidx-1 << endl;
        count+=2*(xval[x].size()-xidx-1)*xidx*(yval[y].size()-yidx-1)*yidx;
        //cout << count << endl;
    }
    cout << count << endl;
}
