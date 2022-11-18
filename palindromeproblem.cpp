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
#define all(x) x.begin(),x.end()
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define rep(i,a,b) for(ll i=a; i<b; i++) 
#define even(x)  x % 2 == 0 
#define odd(x)  x % 2 != 0 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int n;
    cin >> n;

    vl v(n);
    rep(i,0,n)
    {
        cin >> v[i];
    }
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    if(n == 2)
    {
        if(v[0] > v[1]) cout << -1 << endl;
        else if(v[0] == v[1]) cout << 0 << endl;
        else cout << v[1]-v[0] << endl;
        return;
    }
    ll i = 0, j = n-1;
    vl w;
    while(i <= j)
    {
        if(v[j]-v[i] < 0)
        {
            cout << -1 << endl;
            return;
        }
        w.pb(v[j]-v[i]);
        i++; j--;
    }
    bool b = false;
    rep(a,0,w.size()-1)
    {
        if(w[a] < w[a+1]){
            cout << -1 << endl;
            return;
        }
    }
    cout << w[0] << endl;
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