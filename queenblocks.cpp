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

int cb[8][8];

void prin()
{
    rep(i, 0, 8)
    {
        rep(j, 0, 8)
        {
            cout << cb[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void solve()
{
    rep(i, 0, 8)
    {
        rep(j, 0, 8)
        {
            cb[i][j] = 0;
        }
        // cout << endl;
    }

    int k, l;
    cin >> k >> l;
    cb[k - 1][l - 1] = 1;
    int n = k-1, m = l-1;
    int g = -1, h = -1;


    if (n == 0 and m == 0)
    {
        g = n + 2;
        h = m + 1;
        cb[n + 2][m + 1] = 2;
        prin();
        return;
    }
    if (n == 0 and m == 7)
    {
        g = n + 2;
        h = m - 1;
        cb[n + 2][m - 1] = 2;
        prin();
        return;
    }
    if (n == 7 and m == 7)
    {
        g = n - 2;
        h = m - 1;
        cb[n - 2][m - 1] = 2;
        prin();
        return;
    }
    if (n == 7 and m == 0)
    {
        g = n - 2;
        h = m + 1;
        cb[n - 2][m + 1] = 2;
        prin();
        return;
    }

    if(n == 0)
    {
        cb[n+2][m-1] = 2;
        cb[n+2][m+1] = 2;
        prin();
        return;
    }
    if(n == 7)
    {
        cb[n-2][m-1] = 2;
        cb[n-2][m+1] = 2;
        prin();
        return;
    }
    if(m == 0)
    {
        cb[n-1][m+2] = 2;
        cb[n+1][m+2] = 2;
        prin();
        return;
    }
    if(m == 7)
    {
        cb[n-1][m-2] = 2;
        cb[n+1][m-2] = 2;
        prin();
        return;
    }

    if(n == 1 and m == 1)
    {
        cb[4][0] = 2;
        cb[0][3] = 2;
        prin();
        return;
    }
    if(n == 1 and m == 6)
    {
        cb[0][4] = 2;
        cb[4][7] = 2;
        prin();
        return;
    }
    if(n == 6 and m == 6)
    {
        cb[3][7] = 2;
        cb[7][4] = 2;
        prin();
        return;
    }
    if(n == 6 and m == 1)
    {
        cb[3][0] = 2;
        cb[7][3] = 2;
        prin();
        return;
    }

    if(n == 1)
    {
        cb[0][m-2] = 2;
        cb[2][m+2] = 2;
        prin();
        return;
    }
    if(n == 6)
    {
        cb[7][m-2] = 2;
        cb[3][m+1] = 2;
        prin();
        return;
    }
    if(m == 6)
    {
        cb[n+2][m-1] = 2;
        cb[n-2][m+1] = 2;
        prin();
        return;
    }
    if(m == 1)
    {
        cb[n+2][m-1] = 2;
        cb[n-2][m+1] = 2;
        prin();
        return;
    }

    cb[n-2][m+1] = 2;
    cb[n+2][m-1] = 2;
    prin();
        return;


    
    
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