#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n,m;
    cin>>n>>m;
    map<string, string> mp;
    string s1, s2;
    for (int i=0;i<m;i++)
    {
    	cin >>s1>>s2;
    	if(s2.size()<s1.size())
    		mp[s1] = s2;
    	else
    		mp[s1] = s1;
    }

    vector <string> a(n);
    for (int i=0;i<n;i++)
    {
    	cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            cout <<mp[a[i]];
        }
        else{
            cout <<" "<<mp[a[i]];
        }
    }
    cout <<endl;
    return 0;
}
