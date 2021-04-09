#include <bits/stdc++.h>
using namespace std;

map<int,bool>m;
int main()
{
	int n;
	cin >>n;
	vector<int>v(n);
	int neg=0,pos=0,zero=0;
	for(int i=0;i<n;i++){
		cin >> v[i];
		if(v[i]==0)zero++;
		else if(v[i]<0)neg++;
		else pos++;
	}
	int c=0;
	cout <<1<<" ";
	for(int i=0;i<n;i++){
		if(v[i]<0){
			cout << v[i];
			m[v[i]]=1;
			c++;
			break;
		}
	}
	if(pos){
		cout <<endl<<pos<<" ";
		for(int i=0;i<n;i++){
			if(v[i]>0){
				m[v[i]]=1;
				c++;
				cout << v[i]<<" ";
			}
		}
	}
	else{
		neg--;
		if(neg%2)neg--;
		cout << endl<<neg<<" ";
		for(int i=0;i<n && neg>0;i++){
			if(v[i]<0 && !m[v[i]]){
				m[v[i]]=1;
				c++;
				cout <<v[i]<<" ";
				neg--;
			}
		}
	}
	
	cout << endl<<n-c<<" ";
	for(int i=0;i<n;i++){
		if(!m[v[i]]){
			cout << v[i]<<" ";
		}
	}
	cout << endl;
}