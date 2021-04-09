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

int n,m;
string s[20];
int fx[4]={1,-1,0,0};
int fy[4]={0,0,1,-1};

bool eat(int x,int y)
{

	for(int i=0;i<4;i++){
		int dx=x+fx[i];
		int dy=y+fy[i];
		if(dx>=0 && dx<n && dy>=0 && dy<m){
			if(s[dx][dy]=='P'){
				s[dx][dy]='.';
				return 1;
			}
		}
	}
	return 0;

}
int main()
{
	cin >>n >>m;

	for(int i=0;i<n;i++)cin >>s[i];

	int c=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='W' && eat(i,j)){
				c++;
			}
		}
	}
	cout << c<<endl;

	return 0;
	
	
}