#include <bits/stdc++.h>
using namespace std;

int main()	{
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, s, q; cin >> n >> s >> q;
	vector<pair<int,int>> video[n+1];
	for (int i=1; i<=n; i++) video[i].push_back({0,0});
	int time=0;
	for (int i=1; i<=q; i++)
	{
		int t, v, x; cin >> t >> v >> x;
		time+=t;
		video[v].push_back({x+video[v][video[v].size()-1].first,time});
	}
	/*
	for (int i=1; i<=n; i++)
	{cout << endl << i << endl;
		for (int j=0; j<video[i].size(); j++)
		{
			cout << video[i][j].first << " " << video[i][j].second << endl;
		}
	}
	*/
	for (int i=1; i<=n; i++)
	{
		if (video[i].size()==1)
		{
			cout << -1 << " ";
			continue;
		}
	/*	else if (video[i].size()==2)
		{
			cout << video[i][1].first << " ";
			continue;
		}*/
		for (int j=1; j<video[i].size(); j++)
		{
			if (j==video[i].size()-1)
			{
				cout << video[i][j].first << " ";
				break;
			}
			if (video[i][j+1].second-video[i][j].second>s||video[i][j+1].second-video[i][j].second<0)
			{
				cout << video[i][j].first << " ";
				break;
			}
		}
	}
}

/*
_____________________FAST INPUT/OUTPUT_____________________

	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);	<-- might cause errors but probably not
	-----OR-----
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

_____________________USER-DEFINED STRUCT & HOW TO SORT IT_____________________
	
struct Edge
{
	int weight,on,n1,n2;
	bool operator < (const Edge e) const
	{
		if (weight==e.weight)
		{
			if (on==e.on)
			{
				if (n1==e.n1)
				return n2 < e.n2;
			}
			else return on < e.on;
		}
		else return weight < e.weight;
	}
};

vector<Edge> v;
v.push_back({2,3,4});
cout << v[0].c;

_____________________PARSING_____________________

					CHAR TO INT
char x; cin >> x;
int y=x-'0';
-----OR-----
int x;
char buffer[256];
cin >> buffer;
x = atoi (buffer);

					INT TO STRING
int n;
string s = to_string(n);

_____________________USING GETLINE_____________________

might have to use cin.ignore() in places where there is a newline character to ignore it
also try this:
string a;
do getline(cin, a); while (a.empty());
__________________________________________







int link[100001], size[100001];

int find(int x)
{
	while(x!=link[x]) x=link[x];
	return x;
}

bool same(int a, int b)
{
	return find(a)==find(b);
}

void unite(int a, int b)
{
	a=find(a);
	b=find(b);
	if (size[a]<size[b]) swap(a,b);
	size[a]+=size[b];
	link[b]=a;
}

int main()
{
	cin.sync_with_stdio(0);
    cin.tie(0);
	int n, m, d, original=0, last=0; cin >> n >> m >> d;
	map<pair<int,int>,int> newedges;
	vector<Edge> v;
	
	for (int i=1; i<=n+1; i++) {link[i]=i; size[i]=1;}
	
	for (int i=1; i<=m; i++)
	{
		int a, b, w; cin >> a >> b >> w;
		if (i<=n-1)
		v.push_back({w,0,a,b});
		else v.push_back({w,1,a,b});
	}
	
	sort(v.begin(), v.end());
		
	for (int i=0; i<v.size(); i++)
	{
		int a=v[i].n1, b=v[i].n2;
		if (!same(a,b))
		{
			unite(a,b);
			if (v[i].on==0) original++;
			else if (v[i].weight<=d)
			{
				newedges[{a,b}]=v[i].weight;
				newedges[{b,a}]=v[i].weight;
			}
			
			last=i;
		}
	}
		
	for (int i=last+1; i<v.size(); i++)
	{
		int a=v[i].n1, b=v[i].n2, w=v[i].weight;
		if (v[i].on==0&&w<=d&&newedges[{a,b}])
		{
			original++; break;
		}
	}
	
	cout << n-1-original << endl;
}

__________________________________________

int arr[35];
	for (int i=0; i<35; i++) cin >> arr[i];
	
	for (int a=0; a<256; a++)
	{
		char key=a;
		cout << "key: " << key << "\tmessage: ";
		for (int i=0; i<35; i++)
		{
			char s=key;
			s^=char(arr[i]);
			cout << s;
		}
		cout << endl << endl;
	}

__________________________________________

*/
