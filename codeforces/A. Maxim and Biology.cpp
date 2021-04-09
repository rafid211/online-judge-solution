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

int f(string s)
{
	string r="ACTG";

	int x=0;
	for(int i=0;i<4;i++){
		int up=(s[i]-r[i]+26)%26;
		int down=(r[i]-s[i]+26)%26;
		int d=min(up,down);
		x+=d;
	}
	return x;
}
int main()
{

	int n;
	cin >>n;
	string s;
	cin >>s;
	string r="";
	int x=INT_MAX;
	for(int i=0;i<n-4+1;i++){
		r="";
		for(int j=i;j<i+4;j++){
			r+=s[j];
		}
		x=min(x,f(r));
	}
	cout <<x<<endl;

}