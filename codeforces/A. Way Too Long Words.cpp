#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string word;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++){
        getline(cin,word);
        int len = word.length();
        if(len>10){
            int m = len-2;
            cout <<word[0]<<m<<word[len-1]<<endl;
        }
        else{
            cout <<word<<endl;
        }
    }

    return 0;
}
