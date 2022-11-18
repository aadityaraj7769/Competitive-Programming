#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
        cin >> n;
        long long k = 1, i = 1;
        while(k <= pow(10,9) && i<n)
        {
            k = pow(3,i);
            i++;
        }
        // cout << k << endl;
        if(k <= pow(10,9))
        {
            cout << "YES" << endl;
            int m= 1;
            for(int i = 0; i<n; i++) {
               
                cout << m;
                 m = m*3;
                if(i != n-1)
                {
                    cout << " ";
                }
            }
        }else{
            cout << "NO" ;
        }
        cout << endl;
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