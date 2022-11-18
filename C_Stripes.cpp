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
    // int a[8][8];
    vector<string> a(8);
    rep(i,0,8)
    {
        string k;
        cin >> k;
        a[i] = k;
    }
    int ct = 0, pt = 0;
    char p = 'B', q = 'R';
    rep(i,0,8)
    {
        rep(j,0,8)
        {
            // if(a[i][j] == p) pt++;
            if(a[i][j] == q) ct++;
        }
        // if(pt == 8) {
        //     cout << p << endl;
        //     return;
        // }
        if(ct == 8) {
            cout << q << endl;
            return;
        }
        pt = 0; ct = 0;
    }
    int cti = 0, pti = 0;
    char pi = 'B', qi = 'R';
    rep(i,0,8)
    {
        rep(j,0,8)
        {
            if(a[j][i] == pi) pti++;
            // if(a[j][i] == qi) cti++;
        }
        if(pti == 8) {
            cout << pi << endl;
            return;
        }
        // if(cti == 8) {
        //     cout << qi << endl;
        //     return;
        // }
        pti = 0; cti = 0;
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