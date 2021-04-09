#include <bits/stdc++.h>
using namespace std;
int a[1007][1007];
int row[1007];
int col[1007];
int main()
{	
	ios_base::sync_with_stdio(0);cin.tie(nullptr);
	cout.tie(nullptr);
	
	for(int i=0;i<1005;i++){
		row[i]=i;
		col[i]=i;
	}
	int n,mm,k;
	cin >> n>>mm>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<mm;j++){
			cin >> a[i][j];
		}
	}
	char c;
	int x,y;
	for(int i=0;i<k;i++){
		cin >>c>>x>>y;
		x--,y--;
		if(c=='c'){
			swap(col[x],col[y]);
		}
		else if(c=='r'){
			swap(row[x],row[y]);
		}
		else{
			cout <<a[row[x]][col[y]]<<'\n';
		}		
	}
	return 0;

}