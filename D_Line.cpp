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
    int n;
    cin >> n;
    ll sum = 0;
    string s;
    cin >> s;
    rep(i,0,n)
    {
        if(s[i] == 'L') sum += i;
        else sum += n-i-1;
    }
    vi t;
    rep(i,0,n/2)
    {
        if(s[i] == 'L')
        {
            t.pb(n-2*i-1);
        }
    }
    if(n & 1)
    {
        rep(i,n/2+1, n)
        {
            if(s[i] == 'R')
            {
                t.pb(2*i-n+1);
            }
        }
    }else{
        rep(i,n/2, n)
        {
            if(s[i] == 'R')
            {
                t.pb(2*i-n+1);
            }
        }
    }
    sort((t));
    reverse(all(t));
    // cout << sum << endl;
    // cout << t.size() << endl;
    // cout << v.size() << " " << w.size() << " " << sum << endl;
    vl g(n);
    rep(i,0,t.size())
    {
        sum += t[i];
        g[i] = sum;
        // cout << sum << " " << sum << endl;
        cout << g[i] << " " ;
    }
    if(t.size() != 0)
    {

    rep(i,t.size(), n)
    {
        // cout << sum << " " << sum << 100 << endl;
        g[i] = g[i-1];
        cout << g[i] << " ";
    }
    }else{
        rep(i,0,n){
            cout << sum << " ";
        }
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