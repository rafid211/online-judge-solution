#include <bits/stdc++.h>
using namespace std;
string s;
void bin(int n)
{
    if(!n)return;
    s.push_back((n%2)+'0');
    bin(n/2);
}
int main()
{
    for(int i=1;i<101;i++){
        s="";
        bin(i);
        reverse(s.begin(),s.end());
        cout <<i<<" "<<s<<endl;
    }

}
