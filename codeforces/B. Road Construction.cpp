#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;

#define x first
#define y second
#define pb push_back
#define MX 100007

int fx[4]={1,-1,0,0};
int fy[4]={0,0,1,-1};
int n,m;

bool d[1007];
int main()
{

	cin >>n>>m;
	for(int i=0;i<m;i++){
		int u,v;
		cin >>u>>v;
		d[u]=1;
		d[v]=1;
	}

	int center=1;
	for(int i=1;i<=n;i++){
		if(!d[i]){
			center=i;
			break;
		}
	}

	cout << n-1<<endl;
	for(int i=1;i<=n;i++){
		if(i==center)continue;
		cout <<i<<" "<<center<<endl;
	}
	
	

}