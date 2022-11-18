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

void solve()
{
    int n;
    cin >> n;
    vi v(n), w;
    bool a = true, b = true, c = true;
    rep(i, 0, n)
    {
        cin >> v[i];
        int k = v[i] % 10;
        if (k == 1 || k == 2 || k == 4 || k == 8)
        {
            int z = v[i] / 10;
            if (even(z))
            {
                a = false;
            }
            else
            {
                b = false;
            }
        }
        if (k == 3 || k == 6 || k == 7 || k == 9)
        {
            int z = v[i] / 10;
            if (even(z) && z != 0)
            {
                b = false;
            }
            else if (even(z) && z == 0)
            {
                b = false;
            }
            else
            {
                a = false;
            }
        }
        if (k == 5 || k == 0)
        {
            c = false;
            w.pb(v[i]);
        }
    }
    sort(w);
    if (w.size() > 1)
    {

        if ((w[0] - w[w.size() - 1] == 0) || (w[w.size() - 1] - w[0] == 5 && w[0] % 10 == 5))
        {
            c = false;
        }
        else
        {
            cout << "No" << endl;
            // cout << "hello" << endl;
            return;
        }
    }
    if ((a == false && b == false) || (a == false && c == false) || (b == false && c == false) || (a == false && b == false && c == false))
    {
        cout << "No" << endl;
    }
    // else if (a == true && b == true && c == true)
    // {
    //     cout << "No" << endl;
    // }
    else
    {
        cout << "Yes" << endl;
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