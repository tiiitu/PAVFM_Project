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

bool isSafe(ll x,ll y,ll n,ll m)
{
    if(x<0 or y<0 or x>=n or y>=m) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1; 
    cin>>t;

    while(t--)
    {
        ll n,m,sx,sy,d; 
        cin>>n>>m>>sx>>sy>>d;
        ll ans = n+m-2ll;

        bool f1 = rue,f2 = tru

        if((sx+d>=n and sx-d<1) or (sy+d>=m and sy-d<=1)) f1 = false;

        if((sx+d>=n and sy+d>=m) or (sx-d<=1 and sy-d<=1)) f2 = false;

        if(f1==false or f2==false)
        {
            debug(-1);
            continue;
        }

        if(f1 and f2)
        {
            debug(ans);
            continue;
        }
    }
}

