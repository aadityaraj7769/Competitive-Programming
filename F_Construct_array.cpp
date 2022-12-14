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
    int a, b;
    cin >> a >> b;
    if(b < 2*a)
    {
        cout << "NO" << endl;
        return;
    }
    int k = b/a;
    vi v(a);
    cout << "YES" << endl;
    if(b % a == 0)
    {
        rep(i,0,a)
        {
            v[i] = b/a;
        }
    }
    else{
        // cout << b/a;
        int h = b/a;
        // cout << h << endl;
        rep(i,0,a-1)
        {
            v[i] = h;
        }
        v[a-1] = b-(a-1)*(b/a);
    }
    rep(i,0,a)
    {
        cout << v[i] << " ";
    }
    cout << endl << 1 << endl;
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