//Octover 4th, 2019
//https://dmoj.ca/problem/ecoo19r1p2
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()	{
	int tt=10;
	while (tt--)
	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<char,long long> fre;
    map<char,string> rule;
    int r, t;
	string a; cin >> r >> t >> a;
	char first=a[0], last=a[a.length()-1];
	long long len=a.length();
    for (int i=0; i<a.length(); i++) fre[a[i]]++;
    for (int i=1; i<=r; i++)
    {
    	char x; string y; cin >> x >> y;
    	rule[x]=y;
	}
    for (int ii=1; ii<=t; ii++)
    {
    	map<char,long long> temp;
    	for (char i='A'; i<='Z'; i++)
    	{
    			string s=rule[i];
    			if (s.length()&&fre[i])
    			{
    				len+=fre[i]*(s.length()-1);
    				for (int j=0; j<s.length(); j++) temp[s[j]]+=fre[i];
    				fre[i]=0;
    			//	cout << i << " " << rule[i] << " " << len << endl;
				}
		}
		for (char i='A'; i<='Z'; i++) fre[i]+=temp[i];
		first=rule[first][0];
		last=rule[last][rule[last].length()-1];
		
	//	cout << ii << endl;
	//	cout << "A: " << fre['A'] << endl;
	//	cout << "B: " << fre['B'] << endl;
	//	cout << "C: " << fre['C'] << endl;
	}
	cout << first << last << " " << len << endl;
	}
}
