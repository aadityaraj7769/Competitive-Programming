#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    map<int, int> m;

    for(int i = 0; i<n; i++)
    {
        int k;
        cin >> k;
        m[k] = m[k] + 1;
    }

    for(auto pr : m)
    {
        if(pr.second >= 3){
            cout << pr.first << endl;
            return; 
        }
    }
    cout << "-1" << endl;
    return;
    
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