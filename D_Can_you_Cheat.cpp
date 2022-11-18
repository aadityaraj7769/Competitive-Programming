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
const long N = 5*1e5 + 7;
const long long llmax = LONG_LONG_MAX;

int dp[N], kp[N];

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;
    rep(i,0,m)
    {
        vector<int> temp;
        int k;
        cin >> k;
        rep(j,0,k)
        {
            int x;
            cin >> x;
            dp[x]++ ;
            temp.pb(x);
        }
        v.pb(temp);
    }
    rep(i,0,m)
    {
        int l = v[i].size();
        // cout << l << endl;
        rep(j,0,l)
        {
            int x = 0;
            rep(g,0,l)
            {
                x += dp[v[i][g]];
                
            }
            kp[v[i][j]] += x;
        }
    }
    rep(i,0,n)
    {
        cout << dp[i] << " " ;
    }
    cout << endl;
    rep(i,0,n)
    {
        if(kp[i] == 0)
        {
            cout << 1;
        }
        else{
            cout << kp[i];
        }
        if(i != n-1)
        {
            cout << " ";
        }
    }


}

int main()
{
    rep(i,0,N) dp[i] = 1;
    rep(i,0,N) kp[i] = 0;
        solve();
    



    return 0;
}