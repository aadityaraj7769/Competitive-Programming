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

ll val(int a, int b, int c)
{
    return abs(a - b) + abs(b - c);
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    unordered_set<int> u;
    rep(i, 0, n)
    {
        cin >> v[i];
        u.insert(v[i]);
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
    ll ans = INT_MAX;
    ll ans1 = INT_MAX;
    ll ans2 = INT_MAX;
    int a = -1, b = -1;
    rep(i, 0, n)
    {
        if (maxi < v[i])
        {
            maxi = v[i];
            a = i;
        }
        if (mini > v[i])
        {
            mini = v[i];
            b = i;
        }
    }
    ll k, z, y;
    rep(i, 0, n)
    {
        if (i != a and i != b)
        {
            if (u.size() >= 3)
            {
                if(v[i] != mini and v[i] != maxi)
                {
                    k = val(mini, maxi, v[i]);
                    if (ans > k)
                    {
                        ans = k;
                    }
                    z = val(maxi, mini, v[i]);
                    if (ans1 > z)
                    {
                        ans1 = z;
                    }
                    y = val(maxi, v[i], mini);
                    if (ans2 > y)
                    {
                        ans2 = y;
                    }

                }
            }else{
                k = val(mini, maxi, v[i]);
                if (ans > k)
                {
                    ans = k;
                }
                z = val(maxi, mini, v[i]);
                if (ans1 > z)
                {
                    ans1 = z;
                }
                y = val(maxi, v[i], mini);
                if (ans2 > y)
                {
                    ans2 = y;
                }

            }
        }
    }
    ll aans = max(max(ans, ans1), ans2);
    cout << aans << endl;
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