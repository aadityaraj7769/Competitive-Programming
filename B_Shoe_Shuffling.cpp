#include <bits/stdc++.h>
using namespace std;
 
// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
#define vi vector<int>
#define vvl vector<vector<long long>>
#define vpl vector<pair<long long, long long>>
#define ml map<long long, long long>
#define mpl map<pair<long long, long>, pair<long long, long long>>
#define pl pair<long long, long long>
#define sort(x) sort(x.begin(), x.end())
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a; i<b; i++) 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    map<int,int>m;
    rep(i,0,n){
        cin >> v[i];
        m[v[i]]++;
    } 
    if(n == 1)
    {
        cout << -1 << endl;
        return;
    }
    // cout << m.size() << endl;
    vi w(m.size(),-1), a(n);
    int j = 0;
    for(auto val: m)
    {
        if(val.second == 1)
        {
            cout << -1 << endl;
            return;
        }
        w[j] = val.second;
        j++;
    }
    // rep(i,0,j)
    // {
    //     cout << w[i] << endl;
    // }
    int k = 0, y = 0, g =1;
    rep(i,0,m.size())
    {
        int temp = w[i] + y;
        a[k] = temp;
        k++;
        while(g != temp){
            a[k] = g;
            g++; k++;
        }
        g++;
        y += w[i];
    }

    cout << a[0];
    rep(i,1,n)
    {
        cout << " " << a[i];
    }
    cout << endl;
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