#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int c=0;
    double a[n],sum=0;
    for(int i=0;i<n;i++)cin >>a[i],sum+=a[i];
    sort(a,a+n);
    double avg=sum/(double)n;
    avg= round(avg);
    bool ok=0;
    for(int i=0;i<n;i++){ok=0;
        while((int)a[i]<5){
            if(round(avg)>=5.0)break;
            else{ok=1;
                sum++;
                a[i]++;
                avg=sum/(double)n;
               // cout <<i<<" "<<avg<<endl;
            }
        }
        if(ok)c++;
    }
    cout <<c<<endl;
    return 0;
}
