#include <bits/stdc++.h>
using namespace std;

int a[100];
int main()
{
	int k;
	cin >>k;
	string s;
	cin >>s;
	if(s.size()%k){
		cout << -1<<endl;
		return 0;
	}

	for(int i=0;i<s.size();i++){
		int c=s[i]-'a';
		a[c]++;
	}
	for(int i='a';i<='z';i++){
		int id=i-'a';
		if(a[id]%k){
			cout << -1<<endl;
			return 0;
		}
	}
	string r="";
	for(int i='a';i<='z';i++){
		int id=i-'a';
		if(a[id]){
			int x=a[id]/k;
			while(x--)r+=(char)i;
		}
	}
	while(k--){
		cout <<r;
	}
}