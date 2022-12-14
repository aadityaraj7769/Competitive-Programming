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
    int n;
    cin >> n;
    vi v(n), t(n);
    rep(i,0,n) cin >> v[i];
    rep(i,0,n) cin >> t[i];

    vector<pair<int,int>> w;
    rep(i,0,n)
    {
        w.pb({v[i],t[i]});
    }
    sort(w);
    
    int pos = -1, ma = INT_MIN;
    rep(i,0,n)
    {
        if(t[i] > ma) {
            pos = i;
            ma = t[i];
        }
    }
    double a = 0, b = 0;
    b = (double)(w[n-1].first+w[0].first)/2;
    // cout << b << endl;
    vi p, q;
    rep(i,0,n)
    {
        p.pb(abs(v[pos]-v[i]) + t[i]);
        q.pb(abs(b-v[i]) + t[i]);
    }

    // rep(i,0,n) cout << p[i] << " ";
    // cout << endl;
    // rep(i,0,n) cout << q[i] << " ";
    // cout << endl;

    int x = *max_element(all(p));
    int y = *max_element(all(q));

    if(x < y) cout << v[pos] << endl;
    else cout << b << endl;
    

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