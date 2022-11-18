#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;

void solve()
{
    int n, k, r, c;
    cin >> n >> k >> r >> c;
    vector<string> v(n);
    // string v[n];
    rep(i, 0, n)
    {
        string e;
        rep(j, 0, n)
        {
            e += '.';
        }
        v[i] = e;
    }
    v[r - 1][c - 1] = 'X';
    int j = c - 1 + k;
    int l = c - 1 - k;
    while (j < n)
    {
        v[r - 1][j] = 'X';
        j += k;
    }
    while (l >= 0)
    {
        v[r - 1][l] = 'X';
        l -= k;
    }
    for (int i = r; i < n; i++)
    {
        for (int g = 1; g < n; g++)
        {
            if (v[i - 1][g] == 'X')
            {
                v[i][g - 1] = 'X';
            }
        }
    }
    for (int i = r - 2; i >= 0; i--)
    {
        for (int g = 0; g < n - 1; g++)
        {
            if (v[i + 1][g] == 'X')
            {
                v[i][g + 1] = 'X';
            }
        }
    }

    rep(i, 0, n)
    {
        int h = 0;
        rep(j, 0, n)
        {
            if (v[i][j] == 'X')
            {
                h++;
            }
        }
        if (h == 0)
        {
            rep(q, 0, n)
            {
                int w = 0;
                int d = i + k;
                rep(j, i, d)
                {
                    if (v[j][q] != 'X')
                    {
                        w++;
                    }
                    else
                        break;
                }
                if (w == k)
                {
                    v[i][q] = 'X';
                    break;
                }

                int a = 0;
                int b = i - k;
                for (int j = i; j >= b; j--)
                {
                    if (v[j][q] != 'X')
                    {
                        a++;
                    }
                    else
                        break;
                }
                if (a == k)
                {
                    v[i][q] = 'X';
                    break;
                }

            }
        }
    }

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if (v[i][j] == 'X')
            {
                int a = j + k;
                int b = j - k;
                while (a < n)
                {
                    v[i][a] = 'X';
                    a += k;
                }
                while (b >= 0)
                {

                    v[i][b] = 'X';
                    b -= k;
                }
                break;
            }
        }
    }
    int cy = 0;
    for (int i = 0; i < n; i++)
    {
        rep(j, 0, n)
        {
            // if(v[i][j] != 'X')
            // {
            //     v[i][j] = '.';
            // }
            if (v[i][j] == 'X')
                cy++;
            cout << v[i][j];
        }

        cout << endl;
    }
    // cout << cy << endl;
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