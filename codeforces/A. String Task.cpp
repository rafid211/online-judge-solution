#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word,fword;
    getline(cin,word);
    int len = word.length();
    for(int i=0;i<len;i++){
        if(toupper(word[i])){
            word[i] = tolower(word[i]);
        }
        char ch = word[i];
        if((ch!='a'&&ch!='o'&&ch!='y'&&ch!='e'&&ch!='u'&&ch!='i')){
            fword = fword+"."+word[i];
        }
    }
    cout <<fword<<endl;
    return 0;
}
