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

vl v;

void f(ll n)
{
	if(n>0)v.pb(n);
	if(n>(ll)1e10)return;
	f(n*10+4);
	f(n*10+7);
}
//vector<ll,pair<ll,ll> >;
int main()
{
	f(0);
	sort(v.begin(),v.end());
    ll l,r;
    cin >>l>>r;
    int i=0;
    ll sum=0;
    while(l<=r){
    	//cout << v[i]<<endl;
    	if(v[i]>=l&&v[i]<=r){
    		sum+= (v[i]-l+1)*v[i];
    		l=v[i]+1;
    	}
    	else if(v[i]>r){
    		sum+=(r-l+1)*v[i];
    		l=v[i]+1;
    	}
    	i++;
    }
    cout << sum<<endl;

	
	
}