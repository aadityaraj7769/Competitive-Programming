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


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int n;
    cin >> n;
    vi v(n), w(n,0);
    seea(v,0,n);
    
    rep(i,0,n)
    {
        int x = 0;
        rep(j,0,n)
        {
            if(i != j)
            {
                x = x^v[j];
            }
        }
        if(x == v[i])
        {
            cout << v[i] << endl;
            return;
        }
        // x = x ^ v[i];
    }
    // cout << x << endl;
    // rep(i,0,n)
    // {
    //     w[i] = x ^ v[i];
    //     if(v[i] == w[i])
    //     {
            
    //         cout << endl;
            
    //     }
    // }
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