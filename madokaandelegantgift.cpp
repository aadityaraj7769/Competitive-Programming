#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
        cin >> n >> m;
        int A[n][m];
        for(int i = 0; i<n; i++)
        {
            string s;
            cin >> s;
            for(int j = 0; j<m; j++)
            {
                A[i][j] = s[j] - '0';
            }
        }
int count = 0;
        for (int i = 0; i < n-1; i++)
        {
            /* code */
            for (int j = 0; j < m-1; j++)
            {
                /* code */
                if(A[i][j] + A[i][j+1] + A[i+1][j] + A[i+1][j+1] == 3)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            
        }
        cout << "YES" << endl;
        return;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        solve();
        
    }

    return 0;
}