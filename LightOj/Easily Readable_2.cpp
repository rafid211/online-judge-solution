#include <bits/stdc++.h>
using namespace std;
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
map<string,int>mp;
char ch[100005],ch2[105];
int main()
{
    //input;
    //output;
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        while(n--){
            scanf("%s",ch2);
            int len=strlen(ch2);
            string s(ch2,ch2+len);
            if(s.size()>3){sort(s.begin()+1,s.end()-1);}
            mp[s]++;
        }
        int m;
        scanf("%d",&m);
        getchar();
        printf("Case %d:\n",++cnt);
        while(m--){
            gets(ch);
            int len=strlen(ch);
            string w(ch,ch+len);
            stringstream ss;
            ss<<w;
            long long ans=1;
            while(ss>>w){//cout <<w<<endl;
                if(w.size()>3){sort(w.begin()+1,w.end()-1);}
                ans*= mp[w];
            }
            printf("%lld\n",ans);
        }
        mp.clear();
    }
    return 0;
}
