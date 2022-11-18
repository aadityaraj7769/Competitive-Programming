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
    int n, m;
    cin >> n >> m;
    string ans = "";
    if(3*m == n)
    {
        rep(i,0,m) ans += "a";
        rep(i,m,2*m) ans += "b";
        rep(i,2*m,n) ans += "c";

    }
    else if(m > n/2)
    {
        rep(i,0,m){
            ans += "a";
        }
        rep(i,m,n) ans += "b";
    }
    
    else if(m > n/3 and m <= n/2)
    {
        rep(i,0,m) ans += "a";
        rep(i,m,2*m) ans += "b";
        rep(i,2*m,n)  ans += "c";
    }
    else if(m <= n/3)
    {
        int k = n;
        int p = 0, q = 0, r = 0;
        while(k > m)
        {
            rep(i,0,m) {
                if(p == 0) {
                    ans += "a";
                }
                if(p == 1) ans += "b";
                if(p == 2) ans += "c";
            }
            p++;
            p = p%3;
            // cout << p << endl;
            k = k-m;
        }
        rep(i,0,k)
        {
            if(p == 0) {
                    ans += "a";
                }
                if(p == 1) ans += "b";
                if(p == 2) ans += "c";
        }
    }
    cout << ans << endl;
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