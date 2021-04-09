#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define pb push_back
int a[100001];
int main()
{

	fast_io
	for(int i=0;i<100001;i++){a[i]=0;}
	int n;
	cin >>n;
	//vector <int>v(n);

    int in;
	for(int i=0;i<n;i++){
        cin >>in;
        a[in]++;
	}
	bool c=false;
	for(int i=0;i<100001;i++){
        if(a[i]%2!=0){
            c=true;
        }
	}
	if(c){
        cout <<"Conan"<<endl;
	}
	else{
        cout <<"Agasa"<<endl;
	}
	return 0;
}

