#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n,d;
	cin >>n>>d;
	vector<ll>v(n);
	for(int i=0;i<n;i++)cin >>v[i];

	ll ans=0;
	for(int i=0;i<n;i++){
		int id = lower_bound(v.begin(),v.end(),v[i]+d)-v.begin();
		ll x;
		x=id-i;
		if(v[i]+d!=v[id]){
			x--;
		}
		ans+= (x*(x-1))/2;		
	}
	cout << ans<<endl;
	return 0;

}