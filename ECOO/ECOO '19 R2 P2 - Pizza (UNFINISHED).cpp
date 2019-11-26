//
//https://dmoj.ca/problem/ecoo19r2p2
#include <bits/stdc++.h>
using namespace std;

bool dotprod(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	int vx1=x2-x1, vy1=y2-y1, vx2=x4-x3, vy2=y4-y3;
	if (!vx1*vx2+vy1*vy2) return true;
	return false;
}

bool dist(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	double xmid=(x3+x4)/2, ymid=(y3+y4)/2;
	double xmid2=(x1+x2)/2, ymid2=(y1+y2)/2;
	if (abs(xmid2-xmid)<0.001&&abs(ymid2-ymid)<0.001) return true;
	return false;
}

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//int t=10; while (t--)
//{
   	int n, count=0; cin >> n;
   	if (n%2){cout << 0; return 0;}
   	int x[n+1], y[n+1];
   	for (int i=1; i<=n; i++) cin >> x[i] >> y[i];
   	
	for (int i=1; i<=n/2; i++)
	{
		for (int j=1; j<=n/2; j++)
		{
			if (i!=j&&dotprod(x[i],y[i],x[i+n/2],y[i+n/2],x[j],y[j],x[j+n/2],y[j+n/2])&&dist(x[i],y[i],x[i+n/2],y[i+n/2],x[j],y[j],x[j+n/2],y[j+n/2]))
				count++;
		}
	}
	cout << count << endl;
//}
}

/*TEST CASES
8
0 0
0 1
0 2
1 2
2 2
2 1
2 0
1 0

ANS=4
*/
