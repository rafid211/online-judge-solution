#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define pb push_back

int main()
{

	fast_io
	int n;
	int a[1001];
	cin >>n;
	for(int i=0;i<n;i++){
        cin >>a[i];
	}
	//sort(a,a+sizeof(a));
	vector <int> v;
	for(int i=0;i<n;i++){
        int s = sqrt(a[i]);
        if(s*s!=a[i]){
            v.pb(a[i]);
            //cout <<a[i]<<endl;
        }
	}
	sort(v.begin(),v.end());
	cout <<v[v.size()-1]<<endl;
	return 0;
}
