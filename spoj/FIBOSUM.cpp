#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const double EPS = 1e-11;
const double PI = 2 * acos(0.0);
int CASE=0;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

#define caseNo pf("Case %d: ",++CASE)
#define pf printf
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define sll(x,y) scanf("%lld %lld",&x,&y)

#define nl '\n'
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define uniq(a) a.erase(unique(a.begin(), a.end()), a.end())
#define out(x) cout <<"#x = "<<x<<endl
#define outt(x,y) cout <<x<<" "<<y<<endl
#define mem(array,value) memset(array,value,sizeof(array))

#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))

int fx4[]={1,-1,0,0};
int fy4[]={0,0,1,-1};

int fx8[]={0,0,1,-1,-1,+1,-1,1};
int fy8[]={-1,1,0,0,1,1,-1,-1};

#define MX 2

class Matrix{
    public:
        int row,col;
        ll m[MX][MX];
        Matrix()
        {   row=2,col=2;
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    m[i][j]=0;
                }
            }
        }
        Matrix(int a,int b)
        { //constructor
            row=a,col=b;
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    m[i][j]=0;
                }
            }
        }
        void show()
        {
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout << m[i][j]<<" ";
                }cout <<endl;
            }
        }
};

ll multiply(ll a,ll b)
{
    return ((a%MOD)*(b%MOD))%MOD;
}
Matrix matrixMul(Matrix a,Matrix b)
{
    Matrix ans=Matrix(a.row,b.col);
    for(int k=0;k<a.row;k++){
        for(int i=0;i<a.col;i++){
            for(int j=0;j<b.col;j++){
                ans.m[k][j]=(ans.m[k][j]%MOD+ multiply(a.m[k][i],b.m[i][j]))%MOD;
            }
        }
    }
    return ans;
}
Matrix bigmod(Matrix mat,int p)
{
    if(p<=1)return mat;
    Matrix x=bigmod(mat,p/2);
    x=matrixMul(x,x);
    if(p&1){
        x=matrixMul(x,mat);
    }
    return x;
}

ll fib(int n)
{
    if(n==0)return 0;
    if(n<=2)return 1;
    Matrix a=Matrix(2,2);
    int f[2][2]={{1,1},{1,0}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a.m[i][j]=f[i][j];
        }
    }
    a=bigmod(a,n-1);

    return a.m[0][0]%MOD;
}
int main()
{
    int t;
    si(t);
    while(t--){
        int a,b;
        sii(a,b); // sum(x)=fib(x+2)-1
        ll suma=fib(a+1)-1; // sum upto a-1
        ll sumb=fib(b+2)-1; // sum upto b;

        pf("%lld\n",(sumb-suma+MOD)%MOD);
    }
}
