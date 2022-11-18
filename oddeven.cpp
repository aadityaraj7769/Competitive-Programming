#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0;i <n; i++) cin >> v[i];

    int k = v[0] % 2;
    int l = v[1] % 2;

    for(int i = 2; i<n; i+=2)
    {
        if(v[i] % 2 != k){
            cout << "NO" << endl;
            return;
        }
    }
    for(int i = 1; i<n; i+=2)
    {
        if(v[i] % 2 != l){
            cout << "NO" << endl;
            return;
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