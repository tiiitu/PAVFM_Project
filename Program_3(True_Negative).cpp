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
        string s; cin>>s;
        char start = s[0];
        int n = s.size();
        char end = s[n-1];
 
        vector<pair<char,int>> vp;
        for(int i=1;i<n-1;i++)
        {
            vp.push_back({s[i],i+1});
        }
 
 
        vector<int> ans;
        ll ct = 0;
        ll jumps = 0;
 
        ans.push_back(1);
        char prev = s[0];
        
        if(end>start)
        {
 
            sort(vp.begin(),vp.end());
            for(int i=0;i<vp.size();i++)
            {
                if(vp[i].first<start) continue;
                if(vp[i].first>end) break;
                ans.push_back(vp[i].second);
                ct += vp[i].first-prev;
                prev = vp[i].first;
                jumps++;
            }
 
            ct += end - prev;
            jumps++;
            ans.push_back(n);
        }
 
        else
        {
            sort(vp.rbegin(),vp.rend());
 
            for(int i=0;i<vp.size();i++)
            {
                if(vp[i].first>start) continue;
                if(vp[i].first<end) continue;
                ans.push_back(vp[i].second);
                ct += prev - vp[i].first;
                prev = vp[i].first;
            }
 
            ct += prev-end;
            ans.push_back(n);
 
        }
        
 
        print(ct); print(ans.size());
        line;
        for(auto it:ans) print(it);
        line;
    }
}