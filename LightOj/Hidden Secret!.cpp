#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin >>t;
    getchar();
    while(t--){
        char a[102],b[102];
        int ca[26],cb[26];
        for(int i=0;i<26;i++){ca[i]=0;cb[i]=0;}
        gets(a);
        int lena = strlen(a);

        for(int i=0;i<lena;i++){
            if(isupper(a[i])){
                a[i]=tolower(a[i]);
                ca[a[i]-97]++;
            }
            else if(islower(a[i])){
                 ca[a[i]-97]++;
            }
        }
        gets(b);
        int lenb = strlen(b);
        for(int i=0;i<lenb;i++){
            if(isupper(b[i])){
                b[i]=tolower(b[i]);
                cb[b[i]-97]++;

            }
            else if(islower(b[i])){
                cb[b[i]-97]++;
            }
        }
        bool ok=1;
        for(int i=0;i<26;i++){
            if(ca[i]!=cb[i]){ok=0;break;}
            //cout <<ca[i]<<" "<<cb[i]<<endl;
        }
        cout <<"Case "<<++cnt<<": ";
        cout << ((ok)?"Yes":"No")<<endl;
    }
    return 0;
}
