//October 12th, 2019
//https://dmoj.ca/problem/bf3
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
    if (n==1)
    {
        cout << 2 << endl;
        return 0;
    }
    if (n==2)
    {
        cout << 2 << endl;
        return 0;
    }
    while(1)
    {
        for (int i=2; i<=sqrt(n)+1; i++)
        {
            if (n%i==0)
            {
                n++;
                break;
            }
            int a=sqrt(n);
            if (i==a)
            {
            	cout << n << endl;
        		return 0;
			}
        }
    }
    return 0;
} 
