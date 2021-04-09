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

ll cal(ll x)
{
	ll even=0,odd=0,sum=0;
	for(ll i=1,c=1;i<=(ll)x;i*=(ll)2,c++){

		if(sum+i>=x){

			ll go=sum+i-x;
			// cout << "go "<<go<<endl;
			if(c&1){
				odd+=(i-go);
			}
			else{
				even+=(i-go);
			}
			break;
		}
		if(c&1){
			odd+=i%mod;
		}
		else{
			even+=i%mod;
		}
		sum+=i;
	}
	// cout << sum<<" ";
	// cout << odd<<" "<<even<<endl;

	ll a=((even%mod)*((even+1)%mod))%mod;
	ll b=((odd%mod)*(odd%mod))%mod;

	return ((a%mod)+(b%mod))%mod;
}
int main()
{
	// cal(14);

	ll l,r;
	cin >>l>>r;
	
	cout << (cal(r)-cal(l-1)+mod)%mod<<endl;
	return 0;
	
	

}