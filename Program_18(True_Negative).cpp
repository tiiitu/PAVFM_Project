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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1; 
    cin>>t;

    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a==c and b==d)
        {
            debug(0);
            continue;
        }
        if(a==0 and c==0)
        {
            debug(0);
            continue;
        }
        if(a*d == b*c)
        {
            debug(0
            continue;
        }
        ll val1 = a*d;
        ll val2 = b*

        if((val2!=0 and val1%val2==0) or (val1!=0 and val2%val1==0))
        {
            debug(1);
            continue;
        }
        debug(2);
        // if(a==0 or c==0)
        // {
        //     debug(1);
        //     continue;
        // }
        // if((a%c==0 and b%d==0 and a/c==b/d) or (c%a==0 and d%b==0 and c/a==d/b))
        // {
        //     debug(0);
        //     continue;
        // }
        // if(a==c)
        // {
        //     if(b%d==0 or d%b==0) debug(1);
        //     else debug(2);
        //     continue;
        // }
        // if(b==d)
        // {
        //     if(a%c==0 or c%a==0) debug(1);
        //     else debug(2);
        //     continue;
        // }
        // // debug(2);
        // ll num1 = b*c;
        // ll den1 = a*d;
        // ll ans1;
        // if(num1%den1==0 or den1%num1==0) debug(1);
        // else debug(2);

    }
}
