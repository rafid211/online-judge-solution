#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x,y;
    cin >>x>>y;

    if(x+0.5>y){
   		printf("%.2f\n",y);
   	}
   	else if((int)x%5!=0){
   	    printf("%.2f\n",y);
   	}
   	else{
  	    printf("%.2f\n",y-x-0.5);
   	}
    return 0;
}
