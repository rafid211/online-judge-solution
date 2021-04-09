#include<iostream>
using namespace std;

int main(){
	int n,x,seg=0,a;
	cin >>n>>x;
	for(int i=0;i<n;i++){
	  cin >>a;
	  seg+=a;
	}
	if(seg<=x){
	  seg+=(n-1);
	  if(seg==x){
	    cout <<"YES"<<endl;
	  }
	  else{
	    cout <<"NO"<<endl;
	  }
	}
	else{
	  cout <<"NO"<<endl;
	}
	return 0;
}

