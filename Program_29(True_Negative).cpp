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
        ll n; cin>>n;
        vector<vector<char>> a(n,vector<char>(n));
        fo(i,n)
        {
            fo(j,n)
            {
                cin>>a[i][j];
            }
        }
        ll ans=0;
        ll y=0;
        for(int i=0;i<n/2 ;i++)
        {
            vector<vector<char>> v(4);
            for(int j=y;j<n-y;j++) v[0].pb(a[i][j]);
            for(int j=n-1-y;j>=y;j--) v[1].pb(a[j][i]);
            for(int j=n-1-y;j>=y;j--) v[2].pb(a[n-i-1][j]);
            for(int j=y;j<n-y;j++) v[3].pb(a[j][n-i-1]);

            // for(auto it:v){
            //     for(auto it2:it) cout<<it2;
            //     line;
            // }

            for(int j=0;j<n-2*y-1;j++)
            {
                ll ct1=
                for(int x=0;x<4;x++)
            
                    if(v[x][j]=='1') ct1++;
        
                ll ct0=4-ct1;
                char C;
                if(ct1<ct0) c='1';
                else c='0';
                ans+=min(ct1,4l-ct1);
            }
            y++;
        }
        debug(ans);
    }
}
