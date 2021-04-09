#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--){
        ll x,a,b,point;
		cin>>x;
		point=x*8+1;
		point = sqrt(point)-1;
		point/=2;
		//cout <<point<<endl;
		a=point+x-((point)*(point+1))/2;
		b=point+1+((point+1)*(point+2))/2-x;
        ll m= min(a,b);
        cout <<m<<endl;
	}
	return 0;
}
