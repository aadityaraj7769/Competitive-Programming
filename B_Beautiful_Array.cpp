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
#define rep(i,a,b) for(int i=a; i<b; i++) 
#define even(x)  x % 2 == 0 
#define odd(x)  x % 2 != 0 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    vl v(n);
    if(s == 0 and b == 0)
    {
        cout << 0 << endl;
        return;
    }
    if( s < k*b ) {
        cout << -1 << endl;
        return;
    }
    
    // if(s == 0 and k == 0)
    
    else if(s == k*b)
    {
        v[0] = s;
        rep(i,1,n) v[i] = 0;
    }else{
        ll a = (b)*k;
        ll l = a + (k-1)*(n);
        // cout << a << " " << l << " " << s << endl;
        if(s > l)
        {
            cout << -1 << endl;
            return;
        }
        if(s <= a)
        {

            v[0] = s;
            rep(i,1,n) v[i] = 0;
        }
        else{
            v[0] = a;
            ll h = s-a;
            ll y = h/(k-1);
            rep(i,1,y+1)
            {
                v[i] = k-1;
            }
            if(y+1 != n)
            {
                if((k-1)*y == h)
                {
                    rep(i,y+1,n) v[i] = 0;
                }else{
                    // cout << h-(k-1)y << endl;
                    v[y+1] = h-(k-1)*y;
                    rep(i,y+2,n) v[i] = 0;
                }
            }
            
            
        }
    }
    rep(i,0,n)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
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