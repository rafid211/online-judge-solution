#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >>s;
	int n=s.size();

	bool all=1;
	for(int i=0;i<n;i++){
		if(s[i]!='a'){all=0;break;}
	}
	if(all){
		cout << s<<endl;
		return 0;
	}
	
	
	if(s[n-1]=='a'){
		cout << ":("<<endl;
		return 0;
	}

	int c=0;
	vector<pair<char,int>>v;
	string x="";
	for(int i=0;i<n;i++){
		if(s[i]!='a'){
			x+=s[i];
			c++;
			v.push_back({s[i],i});
		}
	}
	if(c%2){
		cout <<":("<<endl;
		return 0;
	}
	//cout << x<<" :: "<<endl;
	bool ok=1;
	for(int i=0,j=(c/2);i<(c/2);i++,j++){
		if(x[i]!=x[j]){
			//cout << i<<" "<<j<<endl;
			ok=0;
			break;
		}
	}
	if(!ok){
		cout <<":("<<endl;
		return 0;
	}
	int i=n-1,fuk=0;
	while(i>=0&&s[i]!='a'){
		i--;
		fuk++;
	}
	//cout << "fuk "<<fuk<<endl;
	if(fuk<(c/2)){
		cout << ":("<<endl;
		return 0;
	}
   int j=0;
   for(int i=0;i<n-(c/2);i++){
   	   if(v[j].second==i){cout << (char)v[j].first;j++;}
   	   else{
   	   	  cout <<'a'
;   	   }
   }
   cout <<endl;	
	
}