#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >>n;
	int _25=0,_50=0,_100=0;

	if(n==1){
		int b;cin >>b;
		if(b==25)cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
		return 0;
	}
	int x;
	bool ok=1;
	for(int i=0;i<n;i++){
		cin >>x;
		if(x==25){
			_25++;
		}
		else if(x==50){
			if(_25>0){
				_25--;
			}
			else {
				ok=0;
			}
			_50++;
		}
		else{
			if(_25>0 && _50>0){
				_25--;_50--;
			}
			else if(_25>=3){
				_25-=3;
			}
			else{
				ok=0;
			}
			_100++;
		}
	}
	if(ok)cout <<"YES"<<endl;
	else cout <<"NO"<<endl;
	return 0;

}