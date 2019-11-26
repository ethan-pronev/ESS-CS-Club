//October 9th, 2019
//https://dmoj.ca/problem/ecoo15r1p4
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t=10; while (t--)
{
	string s; cin >> s; s="_________"+s;
	int dp[1000]; for (int i=1; i<1000; i++) dp[i]=1;
	
	for (int i=9; i<s.length(); i++)
	{
		dp[i] = 0;
		if (s.substr(i-2,3)=="ook") dp[i]+=dp[i-3];
		if (s.substr(i-5,6)=="ookook") dp[i]+=dp[i-6];
		if (s.substr(i-2,3)=="oog") dp[i]+=dp[i-3];
		if (s.substr(i-3,4)=="ooga") dp[i]+=dp[i-4];
		if (s.substr(i-1,2)=="ug") dp[i]+=dp[i-2];
		if (s.substr(i-3,4)=="mook") dp[i]+=dp[i-4];
		if (s.substr(i-7,8)=="mookmook") dp[i]+=dp[i-8];
		if (s.substr(i-4,5)=="oogam") dp[i]+=dp[i-5];
		if (s.substr(i-4,5)=="oogum") dp[i]+=dp[i-5];
		if (s.substr(i-3,4)=="ugug") dp[i]+=dp[i-4];
	}
	cout << dp[s.length()-1] << endl;
}}
