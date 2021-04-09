#include <bits/stdc++.h>
using namespace std;
int p[101];
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){cin >>a[i];p[a[i]]++;}

    int c=0;
    for(int i=0;i<101;i++){
        if(p[i]>=2){
           c+=p[i]/2;
        }
    }
    cout <<c<<endl;
    return 0;
}
