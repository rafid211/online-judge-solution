#include <bits/stdc++.h>
using namespace std;
int d[100004];
set<int>s;
set<int> ::iterator it;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin >>a[i],s.insert(a[i]);

    int c=0;
    for(it=s.begin();it!=s.end();it++)
    {
        //cout <<*it<<endl;
        if(*it!=0)c++;
    }
    cout <<c<<endl;
    return 0;
}
