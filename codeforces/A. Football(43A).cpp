#include <bits/stdc++.h>
using namespace std;
vector <string> v;

int main()
{


    int n;
    string s;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>s;
        v.push_back(s);
    }
    int c1=0,c2=0;
    string team1 = v[0],team2;
    for(int i=0;i<v.size();i++){
        if(v[i]==team1){
            c1++;
            //cout <<c1<<endl;
        }
        else{
            team2 = v[i];
            c2++;
            //cout <<team2<<endl;
        }

    }
    cout <<((c1>c2)?team1:team2)<<endl;
    return 0;
}
