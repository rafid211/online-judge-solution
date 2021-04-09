#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ara[30007];
int main()
{
    int t;
    scanf("%d",&t);
    int cnt=0;
    while(t--){
        int n;
        scanf("%d",&n);

        for(int i=0;i<n;i++)scanf("%lld",&ara[i]);

        int i=0;
        stack<ll>st;
        ll ans=-99;
        while(i<n)
        {
            if(st.empty() || ara[st.top()]<=ara[i]){
                //cout << "push "<<ara[i]<<endl;
                st.push(i);
                i++;
            }
            else
            {
                int top=st.top();
                st.pop();
                ll top_area=ara[top]*(st.empty()?i:i-st.top()-1);
                //cout << top_area<<" "<<top<<endl;
                ans=max(ans,top_area);
            }
        }
        while(!st.empty())
        {
            int top=st.top();
            st.pop();
            ll top_area=ara[top]*(st.empty()?i:i-st.top()-1);
            //cout << top_area<<" "<<top<<endl;
            ans=max(ans,top_area);
        }
        printf("Case %d: %lld\n",++cnt,ans);
    }
}
