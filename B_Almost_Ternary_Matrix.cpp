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

// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int k = n;
    bool b = false;
    rep(i, 0, m)
    {
        if (!b)
        {
            a[0][i] = 1;
            i++;
            a[0][i] = 0;
            b = true;
        }
        else
        {
            a[0][i] = 0;
            i++;
            a[0][i] = 1;
            b = false;
        }
    }
    rep(i, 1, n)
    {
        rep(j, 0, m)
        {
            if (i & 1)
            {

                if (a[i - 1][j] == 1)
                    a[i][j] = 0;
                if (a[i - 1][j] == 0)
                    a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j];
            }
        }
    }
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
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