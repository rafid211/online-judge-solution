#include <bits/stdc++.h>
using namespace std;
int fr[300];
int main()
{
    int n,k;
    cin >>n>>k;
    string s;
    cin >>s;
    int len=s.size();
    for(int i=0;i<len;i++){
        int x=s[i];
        fr[x]++;
    }
    sort(fr,fr+300,greater<int>());
    int i=0;
    long long c=1,ans=0;
    while(k>=fr[i]&&i<300){
        k-=fr[i];
        c=fr[i];
        ans+=(c*c);
        fr[i]=0;
        i++;
    }
    int rem=k;
    for(int i=0;i<300;i++){
        if(fr[i]!=0&&rem>0){
            k-=rem;
            c=rem;
            ans+=(c*c);
            fr[i]-=rem;
            rem=k;
        }
    }
    cout <<ans<<endl;

    return 0;
}
