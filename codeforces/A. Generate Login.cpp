#include <iostream>
using namespace std;
string login(string a,string b)
{
    int n = a.size();
    string s;
    s+=a[0];
    for(int k=1;k<n;k++){
        if(a[k]<b[0]){
            s+=a[k];
            //cout <<s<<endl;
        }
        else
            break;
    }
    s+=b[0];
    return s;
}
int main()
{
    string a,b;
    cin >>a>>b;
    string s = login(a,b);
    cout <<s<<endl;
    return 0;
}
