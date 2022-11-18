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
    int n, m;
    cin >> n >> m;
    vl v(n), w(n, 0), x (n, 0);
    rep(i,0,n) cin >> v[i];
    
    rep(i,0,n-1)
    {
        if(v[i] > v[i+1])
            w[i+1] = w[i] + v[i]-v[i+1];
        else w[i+1] = w[i];
    }

    for(int i = n-1; i>0; i--)
    {
        if(v[i] > v[i-1])
            x[i-1] = x[i] + v[i]-v[i-1];
        else x[i-1] = x[i]; 
    }
    while(m--)
    {
        ll l , r;
        cin >> l >> r;
        if(l < r)
        {
            cout << abs(w[r-1]-w[l-1]) << endl;
        }else{
            // cout << x[r-1] << x[l-1] << endl;
            cout << abs(x[r-1]-x[l-1])<< endl;
        }
    }
}

int main()
{
    int t = 1;
    // cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}