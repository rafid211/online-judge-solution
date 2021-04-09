#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,A=0,B=0;
    cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        if(A<B){
            A+=v[i];
            i++;
        }
        else if(A>B){
            B+=v[j];
            j--;
        }
        else{
            A+=v[i];
            B+=v[j];
            i++;
            j--;
        }
        if(A==B && i==j){
            A+=v[i];
            i++;
            break;
        }
    }

    cout <<i<<" "<<n-i<<endl;
}
