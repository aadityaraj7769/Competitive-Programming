#include <bits/stdc++.h>
using namespace std;
 
// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
#define vi vector<int>
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
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define rep(i,a,b) for(ll i=a; i<b; i++) 
#define even(x)  x % 2 == 0 
#define odd(x)  x % 2 != 0 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    ll n;
    cin >> n;
    vl v(n);
    if(n % 4 == 3)
    {
        rep(i,0,n)
        {
            v[i] = i+1;
        }
    }
    if(n % 4 == 0)
    {
        rep(i,0,n)
        {
            v[i] = i;
        }
    }
    if(n % 4 == 1)
    {
        v[0] = 0;
        rep(i,1,n)
        {
            v[i] = i+1;
        }
    }
    if(n % 4 == 2)
    {
        
            rep(i,0,n-2)
            {
                v[i] = i+1;
            }
            // v[n-2] = 2*(n-2);
            // v[n-1] = v[n-2]+ n-2;
            int z = n-2;
            int ct = 0;
            while(z != 0)
            {
                ct++;
                z /= 2;
            }
            v[n-2] = pow(2, ct);
            v[n-1] = v[n-2]^v[n-3];

        
        
    }
    rep(i,0,n)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int ans = 0;
    // rep(i,0,n)
    // {
    //     ans ^= v[i];
    // }
    // cout << ans << endl;
    // for(int i = 0; i<n; i+=2)
    // {
    //     ans ^= v[i];
    // }
    // int af = 0;
    // for(int i = 1; i<n; i+=2)
    // {
    //     af ^= v[i];
    // }
    // cout << ans << " " <<af << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}