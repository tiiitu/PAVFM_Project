#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define vpll vector<pair<ll,ll>>
#define vll vector<ll>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define fr(i,s,n) for(int i=n-1;i>=s;i--)
#define debug(x) cout<<x<<" "
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
        vector<int> v(7);
        for(int i=0;i<7;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll a=v[0],b=v[1],c=v[6]-a-b;
        cout<<a<<" "<<b<" "<<c<<endl;
    }
}
