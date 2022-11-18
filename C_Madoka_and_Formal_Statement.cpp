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
    vi v(n), w(n);
    rep(i,0,n) cin >> v[i];
    rep(i,0,n) cin >> w[i];
    int ct = 0;
    // rep(i,0,n)
    // {
    //     if(v[i] == w[i]) ct++;

    // }
    // if(ct == n){
    //     cout << "YES" << endl;
    //     return;
    // }
    rep(i,0,n)
    {
        if(v[i] > w[i])
        {
            // cout << 1 << endl;
            cout << "NO" << endl;
            return;
        }
    }
    rep(i,0,n-1)
    {
        if(w[i+1] < v[i] and w[i] > v[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    rep(i,0,n-1)
    {
        if(w[i+1] +1 < w[i] and v[i]!=w[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    if((w[0] < v[n-1] and w[n-1] > v[n-1]) or (w[0] + 1 < w[n-1] and v[n-1] !=w[n-1]))
    {
        cout << "NO" << endl;
            return;
    }

    cout << "YES" << endl;
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