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
#define all(x) x.begin(), x.end()
#define seea(a, x, y)           \
    for (int i = x; i < y; i++) \
    {                           \
        cin >> a[i];            \
    }
#define seev(v, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define sees(s, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        s.insert(x);            \
    }
#define rep(i, a, b) for (int i = a; i < b; i++)
#define even(x) x % 2 == 0
#define odd(x) x % 2 != 0

// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

int a = 1;

void bfs(int source, int * vis, int* level, int*  county, vi g[])
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while (!q.empty())
    {
        int cur_ver = q.front();
        q.pop();
        for (int child : g[cur_ver])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_ver] + 1;
                county[level[child]] = county[level[child]] + 1;
            }
        }
    }
}

void solve()
{
    vi g[N];

    int vis[N];
    int level[N];
    int county[N];

    rep(i,0,N){
        vis[i] = 0;
        level[i] = 0;
        county[i] = 0;
    }

    int n, q;
    cin >> n >> q;

    rep(i, 0, n - 1)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    bfs(1, vis, level, county, g);

    int z = q;
    while (z--)
    {
        int a;
        cin >> a;
    }
    county[0] = 1;
    // rep(i,0,n)
    // {
    //     cout << county[i] << "akhga" << endl;
    // }

    int ct = 0;
    rep(i, 0, n)
    {
        // cout << county[i] << " " << q << endl;
        if (county[i] <= q and q != 0)
        {
            ct += county[i];
            q -= county[i];
        }
        if(county[i] == 0) break;
        // if (q <= 0)
        //     break;
    }

    cout << "Case #" << a << ": " << ct << endl;
    a++;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}