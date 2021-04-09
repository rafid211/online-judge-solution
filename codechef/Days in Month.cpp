#include <bits/stdc++.h>
using namespace std;
int mon=0,tus=0,wed=0,th=0,fri=0,sat=0,sun=0;
void countDays(int w,string s)
{
    if(w==28){
        mon=tus=wed=th=fri=sat=sun=4;
        //mon=4;
    }
    else if(w==29){
        if(s=="mon"){
            mon=5;
            wed=tus=th=fri=sat=sun=4;
        }
        else if(s=="tues"){
            tus=5;
            mon=wed=th=fri=sat=sun=4;
        }
        else if(s=="wed"){
            wed=5;
            mon=th=tus=fri=sat=sun=4;
        }
        else if(s=="thurs"){
            th=5;
            fri=mon=tus=wed=sat=sun=4;
        }
        else if(s=="fri"){
            fri=5;
            sat=mon=tus=wed=th=sun=4;
        }
        else if(s=="sat"){
            sat=5;
            sun=mon=tus=wed=th=fri=4;
        }
        else if(s=="sun"){
            sun=5;
            mon=tus=wed=th=fri=sat=4;
        }
    }
    else if(w==30){
        if(s=="mon"){
            mon=tus=5;
            wed=th=fri=sat=sun=4;
        }
        else if(s=="tues"){
            tus=wed=5;
            mon=th=fri=sat=sun=4;
        }
        else if(s=="wed"){
            wed=th=5;
            mon=tus=fri=sat=sun=4;
        }
        else if(s=="thurs"){
            th=fri=5;
            mon=tus=wed=sat=sun=4;
        }
        else if(s=="fri"){
            fri=sat=5;
            mon=tus=wed=th=sun=4;
        }
        else if(s=="sat"){
            sat=sun=5;
            mon=tus=wed=th=fri=4;
        }
        else if(s=="sun"){
            sun=mon=5;
            tus=wed=th=fri=sat=4;
        }
    }
    else if(w==31){
        if(s=="mon"){
            mon=tus=wed=5;
            th=fri=sat=sun=4;
        }
        else if(s=="tues"){
            tus=wed=th=5;
            mon=fri=sat=sun=4;
        }
        else if(s=="wed"){
            wed=th=fri=5;
            mon=tus=sat=sun=4;
        }
        else if(s=="thurs"){
            th=fri=sat=5;
            mon=tus=wed=sun=4;
        }
        else if(s=="fri"){
            fri=sat=sun=5;
            mon=tus=wed=th=4;
        }
        else if(s=="sat"){
            sat=sun=mon=5;
            tus=wed=th=fri=4;
        }
        else if(s=="sun"){
            sun=mon=tus=5;
            wed=th=fri=sat=4;
        }
    }
    printf("%d %d %d %d %d %d %d\n",mon,tus,wed,th,fri,sat,sun);
}
int main()
{
    int t,w;
    string s;
    cin >>t;
    for(int i=0;i<t;i++){
        cin >>w>>s;
        countDays(w,s);
    }
    return 0;
}
