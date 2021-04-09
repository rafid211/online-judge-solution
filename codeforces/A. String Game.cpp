#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi 2.0*acos(0.0)
#define mp make_pair
#define pii pair<int,int>
#define pss pair<string,string>
#define fi first
#define se second
#define pb push_back
#define sortVA(v) sort(v.begin(),v.end())
#define sortVD(v) sort(v.begin(),v.end(),greater<int>())
#define ASC(a,n) sort(a,a+n);
#define DESC(a,n) sort(a,a+n,greater<int>());
#define out(x) cout <<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))

bool string_match(string temp,string b)
{
    int i=0,j=0,n=temp.size(),c=0;
    while(i<n&&j<b.size()){
        if(temp[i]==b[j]&&temp[i]!='-'){
            j++;
            i++;c++;
            if(c==b.size()){return true;}
        }
        else{i++;}
    }
    return false;
}
int check(int pos[],int n,string a1,string b1)
{
    int mid,first=0,last=n-1;bool ok;string temp;
    while(first<=last){mid=(first+last)/2;//if(!ok){temp=a1;}
        temp=a1;
        for(int i=0;i<=mid;i++){temp[pos[i]-1]='-';}//out(temp);
        ok=string_match(temp,b1);
        if(ok){first=mid+1;}
        else{last=mid-1;}
    }
    return first;
}

int main()
{
    //input;
    fast_io
    string a,b;
    cin >>a;
    cin >>b;
    //cout<< string_match();
    int n=a.size();
    int pos[n];
    for(int i=0;i<n;i++){
        cin >>pos[i];
    }
    int index=check(pos,n,a,b);
    out(index);

    return 0;
}




