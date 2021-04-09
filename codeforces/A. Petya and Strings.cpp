#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,temp1,temp2;
    cin>>s1>>s2;
    int len = s1.length();
    int i=0;
    bool first=0,second=0;
    while(i<len){
        temp1+= tolower(s1[i]);
        temp2+= tolower(s2[i]);
        i++;
    }
    for(int i=0;i<len;i++){
        if(temp1[i]==temp2[i]){
            continue;
        }
        else if(temp1[i]<temp2[i]){
            second=true;
            first=false;
            break;
        }
        else if(temp1[i] > temp2[i]){
            first = true;
            second = false;
            break;
        }
    }
    if(first==0 && second==0){
        cout <<0<<endl;
    }
    else if(first==true){
        cout <<1<<endl;
    }
    else if(second==true){
        cout <<-1<<endl;
    }
    return 0;
}
