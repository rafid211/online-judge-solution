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


int main()
{
	int n,m;
	cin >> n>>m;
	int s,f;
	cin >>s>>f;

	int t[m],l[m],r[m];
	for(int i=1;i<=m;i++){
		cin >>t[i]>>l[i]>>r[i];
	}
	string ans="";
	int time=1;
	if(s>f){
		for(int i=1;;){
			if(s==f)break;
			if(time!=t[i]){
				ans+='L';
				s--;
			}
			else {
				if(s>=l[i]&&s-1<=r[i]){ans+='X';}
				else {ans+='L',s--;}
				i++;
			}
			time++;
		}
		cout << ans<<endl;
		return 0;
	}
	ans="";
	time=1;
	for(int i=1;;){
		if(s==f)break;
		if(time!=t[i]){
			ans+='R';
			s++;
		}
		else {
			if(s+1>=l[i]&&s<=r[i]){ans+='X';}
			else {ans+='R',s++;}
			i++;
		}
		time++;
	}
	cout << ans<<endl;
	return 0;
	
}