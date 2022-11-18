#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
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
#define FOR(i, a, b) for (long i = a; i < b; i++)

// Constants
const long long MOD = 1e9 + 7;
const long long llmax = LONG_LONG_MAX;

int main()
{
    ll n, q;
    cin >> n >> q;

    vl v(n);
    FOR(i, 0, n)
    {
        cin >> v[i];
    }
    ll sum = accumulate(v.begin(), v.end(), 0), y = -1;
    // vl w(n,0);
    ml m;
    while (q--)
    {
        ll t, i, x;
        cin >> t;
        if (t == 1)
        {
            cin >> i >> x;
            if (y == -1)
            {
                sum += -v[i - 1] + x;
                v[i - 1] = x;
            }
            else
            {
                if (m[i] == 0)
                {
                    sum += x - y;
                    m[i] = x;
                }
                else
                {
                    sum += x - m[i];
                    m[i] = x;
                }
            }
            cout << sum << endl;
        }
        if (t == 2)
        {
            cin >> x;
            sum = n * x;
            y = x;
            cout << sum << endl;
            m.clear();
        }
    }

    return 0;
}