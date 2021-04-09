#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second){
        return a.first<b.first;
    }
    else {
        return a.second>b.second;
    }
}
int main()
{
    int n;
    cin >>n;
    vector<pair<int,int> >v(n);
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin >>a>>b>>c>>d;
        int sum=a+b+c+d;
        v[i].first=i;v[i].second=sum;
    }
    sort(v.begin(),v.end(),cmp);
    int c=0;
  //  for(int i=0;i<n;i++)cout <<v[i].first<<" "<<v[i].second<<endl;
    for(int i=0;i<n;i++){
       if(v[i].first==0)cout <<i+1<<endl;

    }
}
