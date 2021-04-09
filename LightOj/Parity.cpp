#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt=0;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        bitset<32>bit(n);
        int c=0;
        for(int i=0;i<bit.size();i++){
            if(bit.test(i))c++;
        }
        //cout <<c<<endl;
        cout <<"Case "<<++cnt<<": ";
        cout <<((c%2)?"odd":"even")<<endl;
    }
    return 0;
}
