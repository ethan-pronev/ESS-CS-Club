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
	int arr[n+1], need[n+1];
	int min=pow(10,9);
	for (int i=1; i<=n; i++) cin >> arr[i];
	for (int i=1; i<=n; i++) cin >> need[i];
	for (int i=1; i<=n; i++)
	{
		int a=arr[i]/need[i];
		if (a<min) min=a;
	}
	cout << min << endl;
}
