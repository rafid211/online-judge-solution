#include <bits/stdc++.h>
using namespace std;

stack<char>s;
map<char,int>m;
bool op(char c)
{
	return c=='+'||c=='-'||c=='*'||c=='/'||c=='^';
}
void infixToPostfix(string expr)
{
	string ans="";
	int len=expr.size();
	for(int i=0;i<len;i++){
		if(expr[i]>='a'&&expr[i]<='z'){
			ans+=expr[i];
		}
		else if(expr[i]=='('){
			s.push('(');
		}
		else if(expr[i]==')'){
			while(!s.empty()&& s.top()!='(' ){
				char c=s.top();
				s.pop();
				ans+=c;
			}
			s.pop();
		}
		else if(op(expr[i])){
			while(!s.empty() && s.top()!='(' && m[expr[i]]<m[s.top()]){
				char ch=s.top();
				s.pop();
				ans+=ch;
			}
			s.push(expr[i]);
		}
		
	}
	while(!s.empty()){
		ans+=s.top();
		s.pop();
	}
	cout << ans<<endl;

}
int main()
{
	m['-']=1;
	m['+']=2;
	m['*']=3;
	m['/']=4;
	m['^']=5;
	int t;
	cin >>t;
	while(t--){
		string x;
		cin >>x;
		infixToPostfix(x);
	}
}