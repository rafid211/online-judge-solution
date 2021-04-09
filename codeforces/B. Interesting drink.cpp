#include <bits/stdc++.h>
using namespace std;
int a[100002];
int pos(int first,int last,int value)
{
    if(first<=last){
        int mid = (first+last)/2;
        if(a[mid]==value){
            //index = mid;
            return pos(mid+1,last,value);
        }
        else if(a[mid]<value){
            return pos(mid+1,last,value);
        }
        else{
            return pos(first,mid-1,value);
        }
    }
    return last+1;
}

int main()
{
    int n,q;
    vector <int>coin;
    cin >>n;
    for(int i=0;i<n;i++)cin >>a[i];
    cin >>q;
    for(int i=0;i<q;i++){
        int p;
        cin >>p;
        coin.push_back(p);
    }
    sort(a,a+n);

    for(int i=0;i<q;i++){
        cout <<pos(0,n-1,coin[i])<<endl;
    }
    return 0;
}
