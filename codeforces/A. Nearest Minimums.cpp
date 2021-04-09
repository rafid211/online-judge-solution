#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define i64 long long
vector <i64> v;
vector <i64> pos;
void findMin(i64 m,i64 n)
{
    i64 i=0,j=0,c;
    while(i<n){
        if(v[i]==m){
            pos.push_back(i);
        }
        i++;

    }
    i64 p = pos.size();
    for(int i=0;i<p-1;i++){
        pos[i] = pos[i+1]-pos[i];

    }
    pos[p-1]=0;
    sort(pos.begin(),pos.end());
    for(int i=0;i<p;i++){
        //cout <<pos[i]<<" ";
    }

    cout <<pos[1]<<endl;

}
int main()
{
    i64 n,a;
    cin >>n;
    for(i64 i=0;i<n;i++){
        cin >>a;
        v.push_back(a);
    }
    i64 vlen = v.size();
    i64 m =v[0];
    for(i64 i=0;i<vlen;i++){
        if(v[i]<m){
            m=v[i];
        }
    }
    findMin(m,vlen);
    return 0;
}
