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
#define rep(i,a,b) for(int i=a; i<b; i++) 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int n, s;
    cin >> n >> s;
    vi v(n), w(n,0),x(n,0);
    rep(i,0,n) cin >> v[i];
    rep(i,0,n-1)
    {
        if(v[i]<2*v[i+1])
        {
            w[i] = 1;
        }
    }
    int ct = 0, res = 0;
    rep(i,0,n)
    {
        if(w[i] == 1 )
        {
            ct++;
            if(ct >= s) res++;
        }
        else
        {
            ct = 0;
        }
    }
    cout << res << endl;
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