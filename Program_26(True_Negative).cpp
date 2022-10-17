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
char solve(ll k,vpll &vp,vpll &vp2,string &s,ll &index)
{
    if(k<s.size()) return s[k];
    index++;
    for(int i=0;i<vp.size();i++)
    {
        if(vp2[i].second>=k and vp2[i].first<=k){
            k-=(vp2[i].first-vp[i].first);
            return solve(k,vp,vp2,s,index);
        }
    }
    return '#'; //non-void fn.
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1; 
    cin>>t;

    while(t--)
    {
        ll n,c,q; cin>>n>>c>>q;
        string s; cin>>s;
        vpll vp;
        vp.pb({0,s.size()-1});
        fo(i,c)
        {
            ll s,e; cin>>s>>e;
            vp.pb({s-1,e-1});
        }

        vpll vp2=vp;
        vp2.pb({0ll,s.ze()-1});
        for(auto it:vp) vp2.pb(it);

        ll lastlimit = vp2[vp2.size()-1].second;
        // vp2[0].second = s.size() + (vp2[0].second-vp2[0].first+1);
        // vp2[0].first = s.size()+1;

        for(int i=1;i<vp.size();i++)
        {
            vp2[i].second = vp2[i-.second + (vp2[i.second-vp2[i].first+1);
            vp2[i].first = vp2[i-1].cond+1;
        }
        while(q--)
        {
            ll k; cin>>k;
            ll index=0;
            //if(index > vp.size()-1) {debug(-1); continue};
            cout<<solve(k-1,vp,vp2,s,index)<<endl;
        }
        // for(auto it:vp2) {print(it.first); print(it.second);} line;
    }
}
