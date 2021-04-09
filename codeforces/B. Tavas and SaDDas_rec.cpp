#include <bits/stdc++.h>
using namespace std;
#define i64 long long
vector <i64> v;
void generateNumber(i64 n)
{

    if(n>1000000000){
        return;
    }
    if(n!=0){
        v.push_back(n);
    }
    generateNumber(n*10+4);
    generateNumber(n*10+7);

}
int searchIndex(int first,int last,int value)
{
    if(first<=last){
        int mid = (first+last)/2;
        if(v[mid]==value){
            return mid+1;
        }
        else if(v[mid]>value){
            searchIndex(first,mid-1,value);
        }
        else{
            searchIndex(mid+1,last,value);
        }
    }
}
int main()
{
    generateNumber(0);
    sort(v.begin(),v.end());
    int n;
    cin >>n;
    cout <<searchIndex(0,v.size()-1,n);
}
