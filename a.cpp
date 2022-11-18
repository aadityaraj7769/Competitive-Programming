#include <bits/stdc++.h>
using namespace std;
#define ll long long

const long long N = 5e1 + 10, MOD = 1e9 + 7;
long long a[N];
set<char> chars[N];

void solve()
{
    ll n;
    string s;
    cin >> n;
    for (ll i = 0; i <= 50; i++)
    {
        chars[i].clear();
    }
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    cin >> s;
    for (ll i = 0; i < n; i++)
        chars[a[i]].insert(s[i]);
    for (ll i = 0; i <= 50; i++)
    {
        if (chars[i].size() >= 2)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    long long T = 1;
    cin >> T;
    for (long long i = 1; i <= T; i++)
    {
        solve();
    }
    return 0;
}