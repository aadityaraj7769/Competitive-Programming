#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '*')
            {
                int k = i;
                while (v[k + 1][j] != 'o' )
                {
                    char t;
                    t = v[k][j];
                    v[k][j] = v[k + 1][j];
                    v[k + 1][j] = t;
                    k++;
                    if(k+1 == n){
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
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