#include <bits/stdc++.h>
using namespace std;

int n,m;
struct pos
{
	int x,y;
	
};

bool check(pos mouse,pos cat1,pos cat2)
{
	pos s;
	s.x=1,s.y=0;
	for (int i=1;i<=m;i++) //11-1m
	{
		s.y+=1;
		if(mouse.x==cat1.x && mouse.y==cat1.y)continue;
		if(mouse.x==cat2.x && mouse.y==cat2.y)continue;
		int mo=abs(s.x-mouse.x)+abs(s.y-mouse.y);
		int c1=abs(s.x-cat1.x)+abs(s.y-cat1.y);
		int c2=abs(s.x-cat2.x)+abs(s.y-cat2.y);
		if(mo<c1&&mo<c2)return 1;
	}
	s.x=0,s.y=m;
	for (int i=1;i<=n;i++) //1m-nm
	{
		s.x+=1;
		if(mouse.x==cat1.x && mouse.y==cat1.y)continue;
		if(mouse.x==cat2.x && mouse.y==cat2.y)continue;
		int mo=abs(s.x-mouse.x)+abs(s.y-mouse.y);
		int c1=abs(s.x-cat1.x)+abs(s.y-cat1.y);
		int c2=abs(s.x-cat2.x)+abs(s.y-cat2.y);
		if(mo<c1&&mo<c2)return 1;
	}
	s.x=0,s.y=1;
	for (int i=1;i<=n;i++) //11-n1
	{
		s.x+=1;
		if(mouse.x==cat1.x && mouse.y==cat1.y)continue;
		if(mouse.x==cat2.x && mouse.y==cat2.y)continue;
		int mo=abs(s.x-mouse.x)+abs(s.y-mouse.y);
		int c1=abs(s.x-cat1.x)+abs(s.y-cat1.y);
		int c2=abs(s.x-cat2.x)+abs(s.y-cat2.y);
		if(mo<c1&&mo<c2)return 1;
	}

	s.x=n,s.y=0;
	for (int i=1;i<=m;i++) //n1-nm
	{
		s.y+=1;
		if(mouse.x==cat1.x && mouse.y==cat1.y)continue;
		if(mouse.x==cat2.x && mouse.y==cat2.y)continue;
		int mo=abs(s.x-mouse.x)+abs(s.y-mouse.y);
		int c1=abs(s.x-cat1.x)+abs(s.y-cat1.y);
		int c2=abs(s.x-cat2.x)+abs(s.y-cat2.y);
		if(mo<c1&&mo<c2)return 1;
	}
	return 0;

}
int main()
{
	cin >>n>>m;
	
	int t;
	cin >>t;
	while(t--){
		pos mouse,cat1,cat2;
		cin >>mouse.x>>mouse.y;
		cin >>cat1.x>>cat1.y;
		cin >>cat2.x>>cat2.y;
		bool ok=check(mouse,cat1,cat2);
		if(ok)puts("YES");
		else puts("NO");
	}
	
	

	return 0;
}