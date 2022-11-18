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
    vi v(n);
    cin >> v[0];
    int k = v[0];
    unordered_map<int,int> u;
    u[v[0]] = 1;
    int no1 = 0;
    vi on;
    rep(i,1,n)
    {
        cin >> v[i];
        if(v[i] == 1) {
            no1++;
            on.pb(i+1);
        }
        k = __gcd(k,v[i]);
        u[v[i]] = i+1;
    }
    // cout << k << endl;
    vector<pair<int,int>> w;
    // cout << u[15] << endl;
    int g = 0;
    if(no1 > 1)
    {   
        g = on[on.size()-1] + on[on.size()-2];

    }
    for(auto val : u)
    {
        w.pb({val.first, val.second});
    }
    if(v[n-1] == 1)
    {
        cout << 2*n << endl;
        return;
    }
    if(k > 1) {
        cout  << -1 << endl;
        return;
    }
    int ans = INT_MIN;
    // rep(i,0,w.size())
    // {
    //     cout << w[i].first << " " << w[i].second << endl;
    // }
    // cout << w.size() << endl;
    rep(i,0,w.size())
    {
        rep(j,i+1,w.size())
        {
            int k = __gcd(w[i].first, w[j].first);
            if(k == 1)
            {
                ans = max(ans, w[i].second+w[j].second);
            }
        }
    }
    ans = max(g, ans);
    if(ans == 0) ans = -1;
    cout << ans << endl;
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