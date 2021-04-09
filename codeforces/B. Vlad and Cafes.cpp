#include <iostream>
using namespace std;
int a[1000000]={0},b[1000000]={0};
void cafe(int a[],int b[],int n)
{
     for(int i=0;i<n;i++){
        b[a[i]]--;
        if(b[a[i]]<=0){
            cout <<a[i]<<endl;
            break;
        }
    }
}
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>a[i];
        b[a[i]]++;
    }
    cafe(a,b,n);
    return 0;
}
