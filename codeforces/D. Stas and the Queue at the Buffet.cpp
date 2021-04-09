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

const ll mod=1000000007;

struct p
{
	ll a,b;
	
};
bool cmp(const p x,const p y)
{
	return (x.a-x.b)>(y.a-y.b);
}
int main()
{
	int n;
	cin >>n;
	vector<p>v(n+1);
	for(int i=1;i<=n;i++){
		cin >> v[i].a>>v[i].b;
	}
	sort(v.begin()+1,v.end(),cmp);


	ll ans=0;
	for(int i=1;i<=n;i++){
		//cout << v[i].a<<" "<<v[i].b<<endl;
		ans+=(v[i].a*(i-1))+(v[i].b*(n-i));
	}
	cout <<ans<<endl;

	return 0;
}