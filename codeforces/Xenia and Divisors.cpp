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


int a;
int x[10];
int main()
{
	int n;
	cin >>n;


	for(int i=0;i<n;i++){
		cin >>a;
		x[a]++;
	}

	if(x[5]||x[7]){
		cout << -1<<endl;
		return 0;
	}
	int d=n/3;
	vi v[100005];
	int c=0;
	for(int i=0;i<d;i++){

		if(x[1] && x[2] && x[4]){c++;
		   v[i].pb(1);
		   v[i].pb(2);
		   v[i].pb(4);
		   x[1]--;x[2]--;x[4]--;
		}
		else if(x[1] && x[2] && x[6]){c++;
		   v[i].pb(1);
		   v[i].pb(2);
		   v[i].pb(6);
		   x[1]--;
		   x[2]--;
		   x[6]--;
		}
		else if(x[1] && x[3] && x[6]){c++;
		   v[i].pb(1);
		   v[i].pb(3);
		   v[i].pb(6);
		   x[1]--;
		   x[3]--;
		   x[6]--;
		}
	}
	if(c!=d){
		cout << -1<<endl;
		return 0;
	}
	for(int i=0;i<d;i++){
		for(int j=0;j<v[i].size();j++){
			cout << v[i][j]<<" ";
		}cout <<endl;
	}
	return 0;
	
}