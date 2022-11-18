#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x < 5)
    {
        cout << x << endl;
        return;
    }
    int y = x / 5;
    int k = y * 4;
    int res = k + x % 5;
    cout << res << endl;
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