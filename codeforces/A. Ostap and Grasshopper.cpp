#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,k;
    cin >>n>>k;
    string s;
    cin >>s;
    int g = s.find("G");
    int t = s.find("T");
    //cout <<g<<" "<<t<<endl;
//    for(int i=0;i<n;i++){
//        if(s[i]=='G'){g=i;}
//        if(s[i]=='T'){t=i;}
//    }
    bool flag = false;
    if(g<t){
        int i=g;//cout <<i<<endl;
        while(i<n){
           if(s[i+k]=='T'){flag = true;break;}
           else if(s[i+k]=='#'){flag= false;break;}
           else{i+=k;}
        }
    }
    else if(t<g){flag = false;
        int i=g;
        while(t<i){
            if(s[i-k]=='T'){flag=true;break;}
            else if(s[i-k]=='#'){flag=false;break;}
            else{i-=k;}
        }
    }
    cout <<((flag)?"YES":"NO")<<endl;
    return 0;
}
