#include <bits/stdc++.h>
using namespace std;

int par[30],r[30];
void init(int n)
{
    while(n>=0){
        par[n]=n;
        r[n]=1;
        n--;
    }
}

int Find(int r)
{
    if(par[r]==r)return r;
    par[r]=Find(par[r]);
    return par[r];
}

int joint(int x, int y) {
    x = Find(x), y = Find(y);
    if(x != y) {
        par[x]=y;
        return 1;
    }
    return 0;
}
int main() {
    int t;
    char s[10];
    scanf("%d ", &t);
    while(t--) {
        gets(s);
        init(s[0]-'A');
        int ans = s[0]-'A'+1;
        while(gets(s)) {
            if(s[0] == '\0')break;
            ans-=joint(s[0]-'A', s[1]-'A');
        }
        printf("%d\n", ans);
        if(t)puts("");
    }
    return 0;
}
