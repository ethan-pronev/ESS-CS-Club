//November 10th, 2019
//https://dmoj.ca/problem/ioi18p1
#include <bits/stdc++.h>
using namespace std;
/*
string original;
int press(string p)
{
	int plen=p.length(), alen=original.length(), mx=0;
	for (int i=0; i<plen; i++)
	{
		for (int j=0; j<plen; j++)
		{
			string temp, check;
			for (int k=i; k<=j; k++) temp+=p[k];
			int tlen=temp.length();
			if (tlen<=alen)
			{
				for (int a=0; a<tlen; a++) check+=original[a];
				if (check==temp) mx=max(mx,tlen);
			}
		}
	}
	return mx;
}
int cnt=0;
*/
string guess_sequence(int n)
{
	vector <string> v; string s;
	int ab=press("AB");
	if (ab)
	{
		int a=press("A");
		if (a)
		{
			v={"0","B","X","Y"};
			s="A";
		}
		else
		{
			v={"0","A","X","Y"};
			s="B";
		}
	}
	else
	{
		int x=press("X");
		if (x)
		{
			v={"0","A","B","Y"};
			s="X";
		}
		else
		{
			v={"0","A","B","X"};
			s="Y";
		}
	}
	
	if (n==1) return s;
			
	for (int i=2; i<n; i++)
	{
		int len=press(s+v[1]+v[1]+s+v[1]+v[2]+s+v[1]+v[3]+s+v[2]);
		//cnt++;
		if (len==s.length()+2) s+=v[1];
		else if (len==s.length()+1) s+=v[2];
		else s+=v[3];
	}
	int one=press(s+v[1]);
	int two=press(s+v[2]);
	//cnt+=2;
	if (one==n) return s+=v[1];
	else if (two==n) return s+=v[2];
	else return s+=v[3];
}

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	cin >> original;
	cout << guess_sequence(original.length());
}
