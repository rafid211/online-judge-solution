#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int k;
    cin >>k;
    vector<pair<int, pair<int,int> > >v;

    for(int i=0;i<k;i++)
    {
        int n;
        cin >>n;
        int a[n];
        ll sum=0;
        for(int j=0;j<n;j++)cin >>a[j],sum+=a[j];

        for(int j=0;j<n;j++){
            v.push_back(make_pair(sum-a[j],make_pair(i,j)));
        }
    }
    stable_sort(v.begin(),v.end());

    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i].first==v[i+1].first&&v[i].second.first!=v[i+1].second.first)
        {
            cout <<"YES"<<endl;
            cout <<v[i].second.first+1<<" "<<v[i].second.second+1<<endl;
            cout <<v[i+1].second.first+1<<" "<<v[i+1].second.second+1<<endl;
            return 0;
        }
    }
    cout <<"NO"<<endl;
    return 0;
}
