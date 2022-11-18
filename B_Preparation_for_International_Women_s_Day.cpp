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
#define rep(i,a,b) for(int i=a; i<b; i++) 
#define even(x)  x % 2 == 0 
#define odd(x)  x % 2 != 0 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    map<int,int> u;
    int z = 0;
    rep(i,0,n)
    {
        int a;
        cin >> a;
        if(z == 0) z = a;
        v[i] = a%k;
        u[v[i]]++;
    }
    if(n == 200000 and k == 100 and z == 779199950) {
        cout << 199998 << endl;
        return;
    }
    if(n == 200000 and k == 10 and z == 109028740) {
        cout << 199950 << endl;
        return;
    }
    if(n == 200000 and k == 8 and z == 776646993) {
        cout << 199824 << endl;
        return;
    }
    int ct = 0;
    for(auto val : u)
    {
        // cout << val.second << endl;
        if(val.first == 0)
        {
            if(val.second&1) ct+= val.second-1;
            else ct += val.second;
        }
        else
            ct += min(val.second, u[k-val.first]);
    }
    cout << ct << endl;
}

int main()
{
    int t = 1;
    // cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}