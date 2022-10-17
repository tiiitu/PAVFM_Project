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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1; 
    cin>>t;

    while(t--)
    {
        ll n,m; cin>>n>>m;
        vll a(n);

        fo(i,n) cin>>a[i];
        string s; 
        fo(i,m) s.push_back('B');
        fo(i,n)
        {
            int mn = min(a[i],m-a[i]+1);
            int mx = max(a[i],m-a[i]+1);
     
            else s[mx-1]='A';
        }
        debug(s);
    }
}
