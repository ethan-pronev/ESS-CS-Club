//
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n, mn, mx;
	int q1, q2, q3; cin >> n;
	int arr[n+1];
	for (int i=1; i<=n; i++) cin >> arr[i];
	sort(arr+1, arr+n+1);
	
	int one[n/2+1], two[n/2+1];
	for (int i=1; i<=n/2; i++)
	{
		one[i]=arr[i];
	}
	int count=0;
	for (int i=(n+3)/2; i<=n; i++)
	{
		count++;
		two[count]=arr[i];
	}
	
//	for (int i=1; i<=(n+1)/2; i++) cout << one[i] << " " << two[i] << endl;

	mn=arr[1];
	mx=arr[n];
	
	int h=n/2;
	q1=(one[(h+1)/2]+one[(h+2)/2]);
	
	q2=(arr[(n+1)/2]+arr[(n+2)/2]);
	
	q3=(two[(h+1)/2]+two[(h+2)/2]);
	
	cout << mn << " " << mx;
	cout << " " << q1/2; if (q1%2==1) cout << ".5";
	cout << " " << q2/2; if (q2%2==1) cout << ".5";
	cout << " " << q3/2; if (q3%2==1) cout << ".5";
	cout << endl;
}
