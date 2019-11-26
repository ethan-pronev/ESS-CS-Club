//
//
#include <bits/stdc++.h>
using namespace std;

int main()	{
	int n, m; scanf ("%d%d",&n,&m);
	int arr[n+1];
	set<int> s[21];
	for (int i=1; i<=n; i++)
	{
		int aa;
		scanf ("%d",&aa);
		arr[i]=aa;
		s[arr[i]].insert(i);
	}
	for (int i=1; i<=m; i++)
	{
		int q; scanf ("%d",&q);
		if (q==1)
		{
			int a, b; scanf ("%d%d",&a,&b);;
			s[arr[a]].erase(a);
			s[b].insert(a);
			arr[a]=b;
		}
		else if (q==2)
		{
			int l, r, c, count=0; scanf ("%d%d%d",&l,&r,&c);
			for (int i=20; i>=0; i--)
			{
				auto ll=s[i].lower_bound(l);
				auto uu=s[i].upper_bound(r);
				count+=distance(ll,uu);
				if (count>=c)
				{
					cout << i << "\n";
					break;
				}
			}
		}
	}
} 
