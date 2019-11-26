//October 7th, 2019
//https://dmoj.ca/problem/ccc12s3
#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    int arr[n+1], fre[1001]={0};
    for (int i=1; i<=n; i++)
    {
        cin >> arr[i];
        fre[arr[i]]++;
    }
    int max1=0, idx1=0, max2=0, idx2=0, maxx=0;
    for (int i=1; i<=1000; i++)
    {
        if (fre[i]>=max1)
        {
            max1=fre[i];
            idx1=i;
        }
    }
    for (int i=1000; i>=1; i--)
    {
        if (fre[i]>=max2&&i!=idx1)
        {
            max2=fre[i];
            idx2=i;
        }
    }
    
   maxx=abs(idx1-idx2);
   
    max1=0; idx1=0; max2=0; idx2=0;
   for (int i=1000; i>=1; i--)
    {
        if (fre[i]>=max1)
        {
            max1=fre[i];
            idx1=i;
        }
    }
    for (int i=1; i<=1000; i++)
    {
        if (fre[i]>=max2&&i!=idx1)
        {
            max2=fre[i];
            idx2=i;
        }
    }
   cout << max(maxx,abs(idx1-idx2));
}
