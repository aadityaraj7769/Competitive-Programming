#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    int k = v[1] - v[0];
    if (k == 2)
    {
        v[0]++;
    }
    else if (k == 3)
    {
        v[0]++;
        v[1]--;
    }
    else if (k > 3)
    {
        cout << "NO" << endl;
        return;
    }
    if(k == 1 )
    {
        v[0]++; v[1]++;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > 2)
        {
            cout << "NO" << endl;
            return;
        }
        else if (v[i + 1] - v[i] == 2)
        {
            v[i+1]--;
        }
        else if(v[i+1] - v[i] == 0)
        {
            v[i+1]++;
        }
    }

    cout << "YES" << endl;
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