#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll freq[32];
map<char,int>m;
int main()
{
    m['a']=0;m['e']=1;m['i']=2;m['o']=3;m['u']=4;
    int t;
    cin >>t;
    string s;
    while(t--){
        memset(freq,0,sizeof(freq));
        int n;
        cin >>n;

        for(int i=0;i<n;i++){
            cin >>s;
            ll mask=0;
            int len=s.size();
            for(int k=0;k<len;k++){
                mask = mask|(1 << (m[s[k]]));
            }
            freq[mask]++;
        }

        ll ans=0;
        for(ll i=0;i<32;i++){
            for(ll j=0;j<32;j++){
                if((i|j)==31){
                    if(i==j){
                       ans+= freq[i]*(freq[i]-1);
                    }
                    else{
                        ans+= (freq[i]*freq[j]);
                    }
                }
            }
        }
//        ans/=2;

        cout << ans/(ll)2<<endl;
    }


}
