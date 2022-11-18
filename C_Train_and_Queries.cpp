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
    map<int,int> ma, wa;

    vi v(n);
    
    rep(i,0,n)
    {
        cin >> v[i];
        if(ma[v[i]] == 0)
        {
            ma[v[i]] = i+1;
        }
        wa[v[i]] = i+1;
    }
    while(k--)
    {
        int a, b;
        cin >> a >> b;
        if(ma.count(a) == 0 || ma.count(b) == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if(ma[a] < wa[b])
        {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        // cout << endl;
        solve();
    }



    return 0;
}