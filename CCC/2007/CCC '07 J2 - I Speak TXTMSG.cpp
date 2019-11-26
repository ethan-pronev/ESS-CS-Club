//October 14th, 2019
//https://dmoj.ca/problem/ccc07j2
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	while (1)
	{
		string s; cin >> s;
		if (s=="CU") cout << "see you";
		else if (s==":-)") cout << "I'm happy";
		else if (s==":-(") cout << "I'm unhappy";
		else if (s==";-)") cout << "wink";
		else if (s==":-P") cout << "stick out my tongue";
		else if (s=="(~.~)") cout << "sleepy";
		else if (s=="TA") cout << "totally awesome";
		else if (s=="CCC") cout << "Canadian Computing Competition";
		else if (s=="CUZ") cout << "because";
		else if (s=="TY") cout << "thank-you";
		else if (s=="YW") cout << "you're welcome'";
		else if (s=="TTYL") {cout << "talk to you later"; return 0;}
		else cout << s;
		cout << endl;
	}
} 
