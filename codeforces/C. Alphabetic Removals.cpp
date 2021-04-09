#include <bits/stdc++.h>
using namespace std;
string s,r;
bool ok=0;
//int ex(int f,int mid,char a)
//{
//    for(int i=f;i<=mid;i++){
//        if(s[i]==a)return i;
//    }
//    return -1;
//}
//int bin(int f,int l,char a)
//{
//    int mid;
//    if(f<=l){
//        mid=(f+l)/2;
//        int pos=ex(f,mid,a);
//        if(pos!=-1){
//            ok=1;
//            //s.erase(s.begin()+pos);
//            return bin(f,mid-1,a);
//        }
//        else{
//            return bin(mid+1,l,a);
//        }
//    }
//    return f;
//}
int main()
{
    int n,k;
    cin >>n>>k;
    cin >>s;
    r=s;
    int p;
    for(int i='a';i<='z';i++){
        for(int j=0;j<n;j++){
            if(s[j]==(char)i&&k!=0){s[j]='#';k--;}
        }
    }
    //if(r==s){cout <<endl;return 0;}
    for(int i=0;i<n;i++)if(s[i]!='#')cout <<s[i];

    cout <<endl;
    return 0;
}
