#include <iostream>
using namespace std;
int d[10]={2,7,2,3,3,4,2,5,1,2};
int main()
{
    int n;
    cin >>n;
    int a = n%10;
    int b = n/10;
    cout <<d[a]*d[b]<<endl;
    return 0;
}
