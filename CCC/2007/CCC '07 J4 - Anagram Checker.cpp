//October 14th, 2019
//https://dmoj.ca/problem/ccc07j4
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    getline(cin,a);
    getline(cin,b);
    map<char,int> one, two;
    for (int i=0; i<a.size(); i++) one[a[i]]++;
    for (int i=0; i<b.size(); i++) two[b[i]]++;
    
    for (char i='A'; i<='Z'; i++)
    {
    	if (one[i]!=two[i])
    	{
    		cout << "Is not an anagram." << endl;
    		return 0;
		}
	}
	cout << "Is an anagram." << endl;
}
