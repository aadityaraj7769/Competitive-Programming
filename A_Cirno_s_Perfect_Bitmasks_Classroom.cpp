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
#define rep(i, a, b) for (int i = a; i < b; i++)

// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    ll n;
    cin >> n;
    int ct = 0;
    if (n == 1)
    {
        cout << 3 << endl;
        return;
    }
    if (n & 1)
    {
        cout << 1 << endl;
    }
    else
    {
        ll y = n;
        while (y % 2 == 0)
        {
            ct++;
            y /= 2;
        }
        
        
        ll k = pow(2, ct);
        int a = n-1;
        int g  = n&a;
        if (g == 0)
        {

            cout << k + 1 << endl;
        }
        else
        {
            cout << k << endl;
        }
    }
    // int g  = 16&15;
    // cout << g << endl;
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