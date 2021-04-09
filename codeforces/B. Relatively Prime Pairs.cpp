#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin >>a>>b;

    int lim=(b-a+1)/2;

    long long x=a;
    cout <<"YES"<<endl;
    for(int i=1;i<=lim;i++){
        cout <<x<<" "<<x+1<<endl;
        x+=2;
    }

}
