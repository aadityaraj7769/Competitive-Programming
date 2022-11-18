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
const long N = 1e3 + 7;
const long long llmax = LONG_LONG_MAX;

set<ll> s;
int dp[N][N];
int coun = -1;
int mini(int x, vl &v, int n, int ct)
{
    if(n <= 0 || x < 0) return 0;
    if(dp[n][x] != -1) return dp[n-1][x];
    if(x == 0)
    {
        if(coun == -1)
            coun = ct;
        return ct;
    }
    if(v[n-1] > x) return dp[n][x] = mini(x, v, n-1, ct);

    return dp[n][x] = min(mini(x-v[n-1], v, n-1, ct+1), mini(x, v, n-1, ct));

}


void solve()
{
    int n;
    cin >> n;
    
    vl v;
    int j = 0;
    for(auto val : s)
    {
        v.pb(val);
        j++;
    }
    int k = mini(n, v, v.size(), 0);
    cout << coun << endl;
}

int main()
{
    int t;
    cin >> t;
    rep(i,0,N) {
        rep(g, 0, N)
        {
            dp[i][g] = -1;
        }
    }
    ll pow = 1;
    while(pow <= 1e12)
    {
        s.insert(pow);
        pow *= 2;
    }

    ll ans = 1, k = 1;
    while(ans <= 1e12)
    {
        s.insert(ans*k);
        ans = ans*k;
        k++;
    }

    while(t--)
    {
        solve();
    }



    return 0;
}