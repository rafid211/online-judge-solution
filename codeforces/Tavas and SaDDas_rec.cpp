#include <bits/stdc++.h>
using namespace std;
vector <int> v;
void luckyNum(long long int i)
{
     cout <<i<<endl;

     //v.push_back(i);
    if(i>200){
        return;
    }
//    if(i==0){
//       return;
//    }
   // v.push_back(i);
    luckyNum(i*10+4);
    luckyNum(i*10+7);

}
int main()
{
    luckyNum(0);
    int num,n;
    //cin >>num;
    for(int i=0;i<v.size();i++){
//        if(num==v.at(i)){
//            n=i;
//            break;
//        }

        cout <<v.at(i)<<endl;
    }
    //cout <<n<<endl;
    return 0;
}
