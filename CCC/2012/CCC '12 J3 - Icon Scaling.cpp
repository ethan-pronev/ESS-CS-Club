//September 22nd, 2019
//https://dmoj.ca/problem/ccc12j3

#include <bits/stdc++.h>
using namespace std;

int n;
void a(string s)
{
	for (int i=1; i<=n; i++) cout << s;
}

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++) {a("*"); a("x"); a("*"); cout << endl;}
	for (int i=1; i<=n; i++) {a(" "); a("xx"); cout << endl;}
	for (int i=1; i<=n; i++) {a("*"); a(" "); a("*"); cout << endl;}
}
