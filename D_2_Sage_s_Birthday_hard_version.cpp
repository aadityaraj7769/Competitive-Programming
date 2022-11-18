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
    ll n;
    cin >> n;
    vl v(n), w(n);
    rep(i,0,n) cin >> v[i];
    sort(v);
    if(n == 1)
    {
        cout << 0 << endl;
        cout << v[0] << endl;
        return;
    }
    if(n == 2)
    {
        cout << 0 << endl;
        cout << v[0] << " " << v[1] << endl;
        return;
    }
    
        int r = 1, k = -1;
        for(int i = 0; i<n; i++)
        {
            w[r] = v[i];
            r += 2;
            k = i;
            if(r >= n)break;
        }
        int l = 0;
        for(int i = k+1; i<n; i++)
        {
            w[l] = v[i];
            l += 2;
            if(l >=n) break;
        }
        
        ll ct = 0;
        rep(i,1,n-1)
        {
            if(w[i] < w[i-1] and w[i] < w[i+1]) ct++;
        }
        cout << ct << endl;
    
    
    rep(i,0,n)
    {
        cout << w[i] << " ";
    }
    cout << endl;

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