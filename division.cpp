#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int div;
    cin >> div;
    if(div >= 1900)
    {
        cout << "Division 1" << endl;
    }
    else if(div < 1900 && div >=1600)
    {
        cout << "Division 2" << endl;
    }
    else if(div < 1600 && div >=1400)
    {
        cout << "Division 3" << endl;
    }
    else if(div < 1400 )
    {
        cout << "Division 4" << endl;
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