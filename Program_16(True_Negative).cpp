#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define mp make_pair
#define vpll vector<pair<ll,ll>>
#define vll vector<ll>
#define mpll map<ll,ll>
#define all(x) x.begin(),x.end()
#define sortall(x) sort(x.begin(),x.end())
#define line cout<<'\n'
#define fo(i,n) for(int i=0;i<n;i++)
#define foe(i,a,n) for(int i=a;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define debug(x) cout<<x<<endl
#define print(x) cout<<x<<" "
#define kick(x) cout<<"Case #"<<x<<": "
#define deb(x,y) cout<<x<<" "<<y<<endl
#define MOD 1000000007
const int N1=100001;
bool isPrime[N1];
void sieve()
{
    memset(isPrime, true, sizeof(isPrime));
    for (int p = 2; p * p <= N1; p++)
    {
        if (isPrime[p] == true)
        {
            for (int i = p * p; i <= N1; i += p)
                isPrime[i] = false;
        }
    }
}
long long power(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = power(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
/*====================================================================================*/

bool isSafe(int i,int j,int n,int m)
{
    if(i<0 or j<0 or i>=n or j>=m) return false;
    else return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1; 
    cin>>t;

    while(t--)
    {
        ll n,m; cin>>n>>m;
        vector<string> vs(n);
        for(int i=0;i<n;i++)
        {
            cin>>vs[i];
        }
        ll ct0=0,ct1=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vs[i][j]=='0') ct0++;
                else ct1++;
            }
        }
        if(ct1==n*m)
        {
            debug(ct1-2);
            continue;
        }
        bool f=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vs[i][j]=='0')
                {
                    if(isSafe(i-1,j,n,m) and vs[i-1][j]='0') f=true;
                    else if(isSafe(i-1,j-1,n,m) and vs[i-1][j1]=='0') f=true;
                    else if(isSafe(i-1,j+1,n,m) and vs[i-1][j+1]='0') f=true;
                    else if(isSafe(i,j-1,n,m) and vs[i][j-1]=='0') =true;
                    else if(isSafe(i,j+1,n,m) and vs[i][j+1]=='0') f=true;
                    else if(isSafe(i+1,j-1,n,m) and vs[i+1][j-1]=='0') f=true;
                    else if(isSafe(i+1,j,n,m) and vs[i+1][j]=='0') f=true;
                    else if(isSafe(i+1,j+1,n,m) and vs[i+1][j+1]=='0') f=true;
                }
                if(f) break;
            }
            if(f) break;
        }

        if(!f) debug(ct1-1);
        else debug(ct1);
    }
}
