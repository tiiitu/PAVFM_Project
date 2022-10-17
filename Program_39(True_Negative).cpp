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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1; 
    cin>>t;

    while(t--)
    {
        ll n; cin>>n;
        if(n%7==0)
        {
            debug(n); continue;
        }        
        ll x=n/10;
        x*=10;
        for(int i=1;i<=7;i++)
        {
            if((x+i)%==0)
            {
                debug(x+i);
            }
        }
    }
}
