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
        ll n,m; cin>>n>>m;
        vll a(m);
        fo(i,m) cin>>a[i];

        multiset<pair<ll,ll>> mst;
        mpll mp;
        fo(i,m) mp[a[i]]++;

        mst.insert({0,0});
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)!=mp.end()) mst.insert({mp[i],mp[i]});
            else mst.insert({0,0});
        }

        if(mst.size()==0)
        {
            continue;
        }

        if(m==1)
        {
            debug(1);
            continue;
        }
        // while(true)
        // {
        //     auto it=mst.end();
        //     it--;
        //     if(it->first>=ans) break;
        //     else ans=it->first;
        //     auto last=mst.end();
        //     last--;
        //     mst.erase(last);
        //     auto first=mst.begin();
        //     mst.erase(first);
        //     if(last->second<=last->first)
        //     {
        //         mst.insert({last->first-1,last->second-1});
        //         mst.insert({first->first+2,first->second+2});
        //     }
        //     else
        //     {
        //         mst.insert({last->first-2,last->second-2});
        //         mst.insert({first->first+2,first->second+2});
        //     }            
        // }

        ll left=0,right=0,sum1=0,sum2=0;
        ll no_of_rounds=0;

        for(auto it:mp) right=max(right,it.second);
        ll ans=LLONG_MAX;
        while(left<=right)
        {
            no_of_rounds++;
            ll mid=left+(right-left)/2;

            bool f=true;
            sum1=min(sum1,0ll);

            sum2=n*(mid/2);

            for(auto it:mp)
            {
                if(it.second<mid)
                {
                    sum2+=(mid-it.second)/2;
                }
                else if(it.second>mid)
                {
                    sum1+=(it.second-mid);
                }
            }
            sum2-=mp.se()*(mid/2);
            if(no_of_rounds>m) f=false;

            for(auto it:mp)
            {
                if(it.second==mid) sum2+=(m-it.second)/2;
            }

            if(sum2<sum1) f=false;

            // if(f){
            //     ans=mid; 
            // }
            
            if(f){
                ans=mid;
            }
            else left=mid+

            if(ans==mid){
                right=mid-1;
            }
        }
        // auto it=mst.end();
        // it--;
        // ans=min(ans,it->first);
        ll maxans=0;
        for(auto it:mp) maxans=ma(maxans,it.second);
        ans=min(ans,maxans);
        debug(ans);
        ans=-1;
    }
}
