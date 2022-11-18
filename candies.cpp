#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int a = 0, b = n - 1, ct = 0, k, res = 0;

    while (a < b)
    {
        if (v[a] > v[b])
        {
            v[a] = v[a] - v[b];
            b--;
            ct++;

        }
        else if (v[a] < v[b])
        {
            v[b] = v[b] - v[a];
            a++;
            ct++;
        }
        else
        {
            k = 0;
            a++;
            b--;
            ct += 2;
            res = ct;
        }

        
    }
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