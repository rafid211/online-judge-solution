#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >>a;
    cin >>b;

    if(a==b){
        cout <<-1<<endl;
        return 0;
    }
    else{
        int as = a.size();
        int bs = b.size();
        cout <<((as>bs)?as:bs)<<endl;
    }
    return 0;
}
