#include <bits/stdc++.h>
using namespace std;
 
// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
#define vi vector<ll>
#define vvl vector<vector<long long>>
#define vpl vector<pair<long long, long long>>
#define ml map<long long, long long>
#define mpl map<pair<long long, long>, pair<long long, long long>>
#define pl pair<long long, long long>
#define sort(x) sort(x.begin(), x.end())
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define seea(a,x,y) for(ll i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define sees(s,n) for(ll i=0;i<n;i++){ll x; cin>>x; s.insert(x);}
#define rep(i,a,b) for(ll i=a; i<b; i++) 
#define even(x)  x % 2 == 0 
#define odd(x)  x % 2 != 0 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vi v(n) ;
    vector<pair<ll,ll>> w(k);
    rep(i,0,n) cin >> v[i];

    rep(i,0,k)
    {
        cin >> w[i].first;
        w[i].second = i;
    }
    ll maxi = *max_element(all(v));
    ll acc =0;
    rep(i,0,n)
    {
        acc += v[i];
    }
    sort(w);
    ll z = k, y = 0, u = 0;
    ll sum = 0;
    vl ans(k);
    while(z--)
    {
        ll q = w[y].first;
        if(q >= maxi)
        {
            ans[w[y].second] = acc;
            y++;
            continue;
        }
        rep(i,u,n)
        {
            // if(u == n) break;
            if(q >= v[i])
            {
                sum += v[i];
            }
            else {
                u = i;
                break;
            }
        }
        ans[w[y].second] = sum;
        y++;

    }
    rep(i,0,k)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}