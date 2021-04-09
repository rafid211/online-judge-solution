#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
int main()
{
    int n,k;
    cin >>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin >>a[i];
    int c=0;
    //vector<pair<char,pair<int,int> > >v;
    //vector<int>index;
    map<int,int>m;
    map<int,int>::iterator it;
    for(int i=0;i<n;i++){
        int x=a[i]-k*i;
        m[x]++;
    }
    int p=-999999;
    for(it=m.begin();it!=m.end();it++){
        p=max(p,it->se);
        //cout << it->fi<<" "<<it->se<<endl;
    }
    cout <<n-p<<endl;

    return 0;

}
