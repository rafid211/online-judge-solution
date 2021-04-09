#include <bits/stdc++.h>
using namespace std;

void inc(string &s,int l)
{
	int carry=1;
	int i=l;
	while(i>=0){
		int sum=(s[i]-'0')+carry;
		carry = sum/10;
		s[i]=(sum%10+'0');
		i--;
	}
	// if(carry){
	// 	s.insert(0,"1");
	// }

}
void even(string s,int n)
{
	int l = (n/2)-1;
	int r = (n/2);
	string ans="";
	if(s[l]<s[r]){
		inc(s,l);
		for(int i=r;i<n;i++){
			s[i]=s[l--];
		}
		//cout << s<<endl;
	}
	else if(s[l]>s[r]){
		for(int i=r;i<n;i++){
			s[i]=s[l--];
		}
	}
	else{
		int i=l,j=r;
		while(s[i]==s[j] && j<n && i>=0){
			i--;j++;
		}
		if(i>=0 && j<n){
			if(s[i]>s[j]){
				for(int k=j;k<n;k++){
					s[k]=s[i--];
				}
			}
			else{
				inc(s,l);
				for(int i=r;i<n;i++){
					s[i]=s[l--];
				}
			}
		}
		else{
			inc(s,l);
			for(int i=r;i<n;i++){
				s[i]=s[l--];
			}
		}
	}
	cout << s<<endl;

}
void odd(string s,int n)
{
	int mid=n/2;
	int l=(n/2)-1;
	int r=(n/2)+1;
	if(s[l]>s[r]){
		for(int i=r;i<n;i++){
			s[i]=s[l--];
		}
	}
	else if(s[l]<s[r]){
		inc(s,mid);
		for(int i=r;i<n;i++){
			s[i]=s[l--];
		}	
	}
	else{
		int i=l,j=r;
		while(s[i]==s[j] && j<n && i>=0){
			i--;j++;
		}
		if(i>=0 && j<n){
			if(s[i]>s[j]){
				for(int k=j;k<n;k++){
					s[k]=s[i--];
				}
			}
			else{
				inc(s,mid);
				for(int i=r;i<n;i++){
					s[i]=s[l--];
				}
			}
		}
		else{
			inc(s,mid);
			for(int i=r;i<n;i++){
				s[i]=s[l--];
			}
		}
	}
	cout << s<<endl;
	
}
int main()
{
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		int len=s.size();
		if(len==1 && s[0]<'9'){
			cout << char(s[0]+1)<<endl;
			continue;
		}
		if(s=="9"){
			cout << 11<<endl;
			continue;
		}
		string temp=s;
		int fuk=0;
		while(temp[fuk]=='0'){
			fuk++;
		}
		s=temp.substr(fuk);
		len=s.size();
		int nine=0;
		for(int i=0;i<len;i++){
			if(s[i]=='9')nine++;
		}
		if(nine==len){
			string ans = "1";
			for(int i=1;i<=len-1;i++)ans+='0';
			ans+='1';
			cout << ans<<endl;
			continue;
		}
		
		if(len&1){
			//odd
			odd(s,len);
		}
		else{
			even(s,len);
		}
		
	}
	return 0;

}

