#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define mp make_pair
#define pb push_back

int main()
{
    //input;output;
	int x,hh,mm;
	cin >>x;
	cin >>hh>>mm;
	int c=0;
	while(x){
        if(hh%10==7 || mm%10==7){
            break;
        }
        mm-=x;
        if(mm<0){
            mm+=60;
            --hh;
            if(hh<0){hh+=24;}
        }
        c++;
        //cout <<hh<<" "<<mm<<endl;
	}
	cout <<c<<endl;
    return 0;
}

