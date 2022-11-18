#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n == 4)
    {
        cout << "1 1 1 1" << endl;
        return;
    }
    if(n % 2 != 0)
    {
        int k = n-2;
        k = k/2;
        cout << k << " " << k+1 << " " << "1 " << "1"<< endl;
    }else{
        int k = n-2;
        k = k/2;
        if(k % 2 == 0)
        {
            cout << k-1 << " " << k+1 << " " << "1 " << "1" << endl;
        }else{
            cout << k-2 << " " << k+2 << " " << "1" << " 1" << endl;
        }
    }
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