#include <bits/stdc++.h>
using namespace std;

int a[101],b[101],x[1007];
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++)cin >>a[i]>>b[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(a[i]==b[j])x[i]=1;
        }
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(!x[i])c++;
    }
    cout <<c<<endl;
}
