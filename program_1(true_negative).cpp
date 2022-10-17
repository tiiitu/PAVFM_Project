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
    
    int a=1;

    ll ans = -1;
    
    ll lo = 1;
    ll hi = 1e18;
    
    ll mid = lo + (hi - lo)/2;
    
    // while(lo<=hi)
    
    while(a<=11)
    {
        for(int b=a+1;b<=11;b++)
        {
            ll x,y;

            cout<<"? "<<a<<" "<<b<<endl;
            fflush(stdout);
            cin>>x

            cout<<"? "<b<<" "<<a<<endl;
            fflush(stdout);
            cin>>y

            if(x!=y and x!=-1 and y!=-1)
            {
                ans = x+y;
                break;
            }

            if(x==-1 or y==-1)
            {
                ans = b-1;
                break;
            }
        }
        if(ans!=-1) break;
        else a++;
    }

    print("!");
    debug(ans);

}
