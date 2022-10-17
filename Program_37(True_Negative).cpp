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
        vll a(n);
        fo(i,n) cin>>a[i];
        ll k; cin>>k;
        vll b(k);
        fo(i,k) cin>>b[i];

        ll adivbym=0;
        fo(i,n)
        {
            if(a[i]%m==0) adivbym++;
        }    
        ll bdivbym=0;
        fo(i,k)
        {
            if(b[i]%m==0) bdivbym++;
        }    

        bool f1=true;
        if(adivbym-bdivbym<0) f1=false;

        // if(!f1)
        // {
        //     cn; continue;
        // }

        ll suma=0,sumb=0;

        fo(i,n){
            suma+=a[i];
        }
        fo(i,k){
            sumb+=b[i];
        }

        if(suma!=sumb)
        {
            cn;
            continue;
        }

        vector<vector<ll>> v1; //number,frequency
        fo(i,n)
        {
            if(v1.size()>=1 and v1.back()[0]==a[i]) v1.back()[1]++;
            else if(a[i]%m!=0)
            {
                v1.push_back({a[i],1});
            }
            else if(a[i]%m==0)
            {
                ll freq=1,z=1;
                while(a[i]%m==0)
                {
                    z=a[i]/m;
                    a[i]/=m;
                    freq=freq*m;
                }
                if(v1.size()>=1 and v1.back()[0]==z) v1.back()[1]+=freq;
                else v1.push_back({z,freq});
            }
        }
        vector<vector<ll>> v2;
        fo(i,k)
        {
            if(v2.size()>=1 and v2.back()[0]==b[i]) v2.back()[1]++;
            else if(b[i]%m!=0)
            {
                v2.push_back({b[i],1});
            }
            else if(b[i]%m==0)
            {
                ll freq=1,z=1;
                while(b[i]%m==0)
                {
                    z=b[i]/m;
                    b[i]/=m
                    freq=freq*m;
                }
                if(v2.size()>=1 and v2.bac()[0]==z) v2.back()[1]+=freq;
                else v2.push_back({z,freq});
            }
        }
        if(v1.size()!=v2.sie())
        {
            cn; continue;
        }
        bool flg=true,flg2=true;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i][0]!=v2[i][0])
            {
                flg=false;
                break;
            }
            // else {
                    // debug(v1[i][0]);
            // }
        
        for(int i=0;i<v.size();i++)
        {
            if(v1[i][1]!=v2[i]])
            {
                flg2=false;
                break;
            }
        }
        if(flg && flg2) cy;
        else cn;
    }
}
