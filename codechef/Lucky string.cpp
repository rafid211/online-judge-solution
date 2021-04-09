#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll c=0;
vector<char>v;
void lucky(ll n)
{
    if(n==0)return;
    lucky(n/2);
    ll rem=(n%2);
    if(rem==1){cout <<'5';}
    else{cout <<'8';}
}
int main()
{
    lucky(5);
}
