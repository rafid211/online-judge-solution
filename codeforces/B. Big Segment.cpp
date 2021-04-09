#include <bits/stdc++.h>
using namespace std;

struct seg
{
	int l,r;
	int pos;
}a[100007];

bool cmp1(seg a,seg b)
{
	if(a.l==b.l){
		//if(a.r==b.r)return a.pos>b.pos;
		return a.r>=b.r;
	}
	return a.l<b.l;
}

int main()
{
	int n;
	cin >>n;
	int mn=INT_MAX,mx=INT_MIN;
	for(int i=0;i<n;i++){
		int l,r;
		cin >> l>>r;
		mn=min(mn,l);
		mx=max(mx,r);
		a[i].l=l;
		a[i].r=r;
		a[i].pos=i;
	}
	sort(a,a+n,cmp1);
	for(int i=0;i<n;i++){
		if(mn==a[i].l && a[i].r==mx){
			cout << a[i].pos+1<<endl;
			return 0;
		}
	}
	cout << -1<<endl;



}