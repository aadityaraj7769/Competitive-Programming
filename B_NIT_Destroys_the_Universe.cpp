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
#define seea(a,x,y) for(ll i=x;i<y;i++){cin>>a[i];}
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
    vl v(n), w(n,0);
    seea(v,0,n);
    if(n == 1 )
    {
        if(v[0] == 0)
        {
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
        return;
    }
    ll ct = 0, x = 0, y = 0, k = 0, l = 0;
    rep(i,0,n)
    {
        if(v[i] == 0)
        {
            ct++;
        }
    }
    if(ct == 0)
    {
        cout << 1 << endl;
        return;
    }
    if(ct == n){
        cout << 0 << endl;
        return;
    }
    rep(i,0,n)
    {
        if(v[i] != 0)
        {
            x = i;
            break;
        }
        k++;
    }
    for(int i = n-1; i>=0; i--)
    {
        if(v[i] != 0)
        {
            y = i;
            break;
        }
        l++;
    }
    if(k + l == ct)
    {
        cout << 1 << endl;
    }else{
        cout << 2 << endl;
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