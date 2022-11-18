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
    vi w(n), v;
    unordered_set<int> q;
    map<int,int> m;
    rep(i,0,n)
    {
        cin >> w[i];
        // m[v[i]]++;
        q.insert(w[i]);
    }

    rep(i,0,n-1)
    {
        if(w[i]!=w[i+1])
        {
            v.pb(w[i]);
        }
    }
     v.pb(w[n-1]); 

    rep(i,0,v.size())
    {
        m[v[i]]++;
    }

    if(n== 1){
        cout << 0 << endl;
        return;
    }
    if(q.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    int ct = 0, k = -1;
    unordered_set<int> u;
    // cout << v.size() << endl;
    for(int i = v.size()-1; i>0; i--)
    {
        if(v[i] > v[i-1] && m[v[i]] > 1)
        {
            k = i-1;
            break;
        }
        if(v[i] < v[i-1])
        {
            k = i-1;
            break;
        }

    }
    if(k == -1){
        cout << 0 << endl;
        return;
    }
    // cout << k << endl;
    for(int i = 0; i<=k; i++)
    {
        u.insert(v[i]);
    }
    cout << u.size() << endl;
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