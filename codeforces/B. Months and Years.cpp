#include <iostream>
using namespace std;
int main()
{
    int month[25]={31,29,31,30,31,30,31,31,30,31,30,31,
                31,29,31,30,31,30,31,31,30,31,30,31};

    int n,a[24];
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>a[i];
        if(a[i]==28){a[i]=29;}
    }

    int i=0;bool ok=0;
    while(i<24){ok=1;
        if(a[0]==month[i]&&a[1]==month[i+1]&&i<24){
            for(int k=0,x=i;k<n;k++,x++){
                if(x<24&&a[k]==month[x]){}
                else{ok=0;break;}
            }
            if(ok){cout <<"YES"<<endl;return 0;}
        }
        i++;
    }
    if(n==1){cout <<"YES"<<endl;return 0;}
    cout <<"NO"<<endl;
    return 0;

}
